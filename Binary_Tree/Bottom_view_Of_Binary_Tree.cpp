//Given a binary tree, return an array where elements represent the bottom view of the binary tree from left to right.
//Note: If there are multiple bottom-most nodes for a horizontal distance from the root, then the later one in the
//level order traversal is considered. For example, in the below diagram, 7 and 34 both are the bottommost nodes at
//a horizontal distance of 0 from the root, here 34 will be considered.

//For the above tree, the output should be 5 8 34 22 25

//Examples :

//Input: root[] = [1, 3, 2]

//Output: [3 1 2]

/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // Your Code Here
        vector<int>v;
        queue<pair<Node*, int>>todo;
        map<int,int>mp;
        todo.push({root,0});
        while(!todo.empty()){
            auto p= todo.front();
            todo.pop();
            Node*node=p.first;
            int x= p.second;
           mp[x]=node->data;
            if(node->left) todo.push({node->left,x-1});
            if(node->right) todo.push({node->right,x+1});
            
            
        }
        for(auto it:mp){
            v.push_back(it.second);
        }
        return v;
    }
};
