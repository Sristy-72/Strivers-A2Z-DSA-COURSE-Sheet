//Given a Binary Tree, find its Boundary Traversal. The traversal should be in the following order: 

//Left Boundary: This includes all the nodes on the path from the root to the leftmost leaf node.
//You must prefer the left child over the right child when traversing. Do not include leaf nodes in this section.

//Leaf Nodes: All leaf nodes, in left-to-right order, that are not part of the left or right boundary.

//Reverse Right Boundary: This includes all the nodes on the path from the rightmost leaf node
//to the root, traversed in reverse order. You must prefer the right child over the left child when traversing.
//Do not include the root in this section if it was already included in the left boundary.

//Note: If the root doesn't have a left subtree or right subtree, then the root itself is the left or right boundary. 

//Examples:

Input: root[] = [1, 2, 3, 4, 5, 6, 7, N, N, 8, 9, N, N, N, N]
Output: [1, 2, 4, 8, 9, 6, 7, 3]

  //SOLUTION
  /*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  bool isLeaf(Node*root){
      return !root->left && !root->right;
  }
  void leftboundary(Node*root, vector<int>&res){
      Node*curr= root->left;
      while(curr){
          if(!isLeaf(curr)) res.push_back(curr->data);
          if(curr->left) curr= curr->left;
          else curr= curr->right;
      }
  }
  void rightboundary(Node*root, vector<int>&res){
      Node*curr= root->right;
      vector<int>temp;
      while(curr){
          if(!isLeaf(curr)) temp.push_back(curr->data);
          if(curr->right) curr= curr->right;
          else curr= curr->left;
      }
      for(int i=temp.size()-1;i>=0;--i){
          res.push_back(temp[i]);
      }
  }
  void addleaves(Node*root, vector<int>&res){
      if(isLeaf(root)) {
          res.push_back(root->data);
          return;
  }
      if(root->left) addleaves(root->left, res);
      if(root->right) addleaves(root->right, res);
  }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int>res;
       if(root==NULL) return res;
       if(!isLeaf(root)) res.push_back(root->data);
       leftboundary(root, res);
       addleaves(root, res);
       rightboundary(root, res);
       return res;
    }
};
