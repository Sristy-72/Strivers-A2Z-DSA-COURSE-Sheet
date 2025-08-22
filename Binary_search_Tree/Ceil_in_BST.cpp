//You are given a root binary search tree and an integer x . Your task is to find the Ceil of x in the tree.
//Note: Ceil(x) is a number that is either equal to x or is immediately greater than x.
//If Ceil could not be found, return -1.

//Examples:
//Input: root = [5, 1, 7, N, 2, N, N, N, 3], x = 3
//Output: 3
//Explanation: We find 3 in BST, so ceil of 3 is 3.

//SOLUTION
class Solution {
  public:
    int findCeil(Node* root, int x) {
        // code here
        int ceil=-1;
        while(root!=NULL ){
            if(root->data==x){
                return x;
            }
            else if(root->data<x){
                root= root->right;
            }
            else{
                 ceil= root->data;
                root= root->left;
            }
        }
       return ceil;
    }
};
