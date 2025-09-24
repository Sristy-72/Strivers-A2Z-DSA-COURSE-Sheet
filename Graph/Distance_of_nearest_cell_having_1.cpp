//Distance of nearest cell having 1

//Given a binary grid of n*m. Find the distance of the nearest 1 in the grid for each cell.
//The distance is calculated as |i1  - i2| + |j1 - j2|, where i1, j1 are the row number
//and column number of the current cell, and i2, j2 are the row number and column number 
//of the nearest cell having value 1. There should be atleast one 1 in the grid.

//Examples

//Input: 
//grid = [[0,1,1,0], [1,1,0,0], [0,0,1,1]]
//Output: 
//[[1,0,0,1], [0,0,1,1], [1,1,0,0]]
//Explanation: 
//The grid is-
//0 1 1 0 
//1 1 0 0 
//0 0 1 1 
//- 0's at (0,0), (0,3), (1,2), (1,3), (2,0) and (2,1) are at a distance of 1 from 1's at (0,1), (0,2), (0,2), (2,3), (1,0) and (1,1) respectively.

class Solution {
  public:
    // Function to find distance of nearest 1 in the grid for each cell.
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        // Code here
        int m= grid.size();
        int n= grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>vis(m,vector<int>(n,0));
        vector<vector<int>>dist(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
                else{
                    vis[i][j]=0;
                }
            }
        }
        int deltarow[]={-1,0,1,0};
        int deltacol[]={0,1,0,-1};
        while(!q.empty()){
            int row= q.front().first.first;
            int col=q.front().first.second;
            int steps=q.front().second;
            q.pop();
            dist[row][col]=steps;
            for(int i=0;i<4;i++){
                int nrow= row+deltarow[i];
                int ncol= col+deltacol[i];
                
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && vis[nrow][ncol]==0 ){
                    vis[nrow][ncol]=1;
                    q.push({{nrow,ncol}, steps+1});
                }
            }
            
        }
        return dist;
    }
};
