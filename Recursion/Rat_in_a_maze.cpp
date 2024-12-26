// Rat in a Maze

// Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). 
// Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can mov
// e are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and the rat
// cannot move to it while value 1 at a cell in the matrix represents that rat can travel through it.
// Note: In a path, no cell can be visited more than one time.
// Print the answer in lexicographical(sorted) order


// Solution

class Solution {
  public:
  vector<string> result;
  bool isSafe(int n , int j , int i){
      return i<n && i>=0 && j<n && j>=0 ;
  }
  void solve(int i ,int j ,  vector<vector<int>>&mat, int n ,string &path){
      if(!isSafe(n,j, i) || mat[i][j]==0){
      return ;
      }
      if(i == n-1 && j == n-1) {
            result.push_back(path);
            return;
        }
         mat[i][j] = 0;
        
        path.push_back('D');
        solve(i+1, j, mat, n, path);
        path.pop_back();
        
        path.push_back('R');
        solve(i, j+1, mat, n, path);
        path.pop_back();
        
        path.push_back('U');
        solve(i-1, j, mat, n, path);
        path.pop_back();
        
        path.push_back('L');
        solve(i, j-1, mat, n, path);
        path.pop_back();
        
        mat[i][j] = 1;
  }
    vector<string> findPath(vector<vector<int>> &mat) {
        string path="";
        int n=mat.size();
        solve(0, 0, mat,n, path);
        return result;
    }
};
