//QUESTION

//You are given a binary tree, and your task is to return its top view. The top view of a binary tree is the set of nodes visible when the tree is viewed from the top.
//Note: 
//Return the nodes from the leftmost node to the rightmost node.
//If two nodes are at the same position (horizontal distance) and are outside the shadow of the tree, consider the leftmost node only. 
//Examples:
//Input: root[] = [1, 2, 3] 
//Output: [2, 1, 3]

//SOLUTION
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
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        // code here
        vector<int>v;
        if(root==NULL) return v;
        map<int ,int>mp;
        queue<pair<Node*, int>>q;
        q.push({root, 0});
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            Node*node= p.first;
            int hd= p.second;
            if(mp.find(hd)==mp.end()) mp[hd]= node->data;
            if(node->left!=NULL) q.push({node->left,hd-1});
            if(node->right!=NULL) q.push({node->right,hd+1});
        }
        for(auto it:mp){
            v.push_back(it.second);
        }
        return v;
        
    }
};
