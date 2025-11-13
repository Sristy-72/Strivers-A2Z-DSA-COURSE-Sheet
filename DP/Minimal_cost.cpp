//Given an array arr[] of size n, where arr[i] denotes the height of ith stone.
//Geek starts from stone 0 and from stone i, he can jump to stones i + 1, i + 2, … i + k.
//The cost for jumping from stone i to stone j is abs(arr[i] – arr[j]). Find the minimum
//cost for Geek to reach the last stone.
//Example:
//Input: k = 3, arr[]= [10, 30, 40, 50, 20]
//Output: 30

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
//MEMOIZATION
  int solve (int ind , int k , vector<int>&height, vector<int>&dp){
     if(ind==0) return 0;
    int minsteps= INT_MAX;
    if(dp[ind]!=-1) return dp[ind];
    for(int j=1;j<=k;j++){
        if(ind-j>=0){
            int jump= solve(ind-j,k,height, dp) +abs(height[ind]-height[ind-j]);
             minsteps= min(jump, minsteps);
        }

    }
    return dp[ind]= minsteps;
 }
    int minimizeCost(int k, vector<int>& arr) {
          int n = arr.size();
         vector<int>dp(n,-1);
        // return  solve(n-1,k,arr, dp);

      // TABULATION
      dp[0]=0;
      
      for(int i=1;i<n;i++){
          int minsteps= INT_MAX;
          for(int j=1;j<=k;j++){
              if(i-j>=0){
              int steps=dp[i-j]+ abs(arr[i]-arr[i-j]);
              minsteps= min(steps, minsteps);
              dp[i]= minsteps;
              }
          }  
      }
      return dp[n-1]


        
       
    }
};


// THIS QUESTION CANNOT BE SPACE OPTIMIZED 
//Space optimization works only when the current state depends on a fixed number of previous states.

