//Given the root of a Binary Search Tree. The task is to find the minimum valued element in this given BST.
//Examples
//Input: root = [5, 4, 6, 3, N, N, 7, 1]
//Output: 1

//SOLUTION
// Function to find the minimum element in the given BST.

/* struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
*/

class Solution {
  public:
    int minValue(Node* root) {
        // Code here
        int ans=root->data;
        while(root->left!=NULL){
            root= root->left;
            ans= root->data;
        }
        return ans;
    }
};
