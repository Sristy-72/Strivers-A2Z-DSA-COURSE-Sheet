//Given an array of positive integers arr[] and a value target, determine if there is a subset of the given array with sum equal to given target. 
//Examples:
//Input: arr[] = [3, 34, 4, 12, 5, 2], target = 9
//Output: true 
//Explanation: Here there exists a subset with target sum = 9, 4+3+2 = 9.


class Solution {
  public:

// MEMOIZATION
  bool solve(vector<int>&arr, int target, int ind, vector<vector<int>>&dp){
      if(target==0) return true;
      if(ind==0) return arr[0]==target;
      if(dp[ind][target]!=-1) return dp[ind][target];
      bool notTaken=solve(arr,target,ind-1,dp);
      bool Taken=false;
      if(arr[ind]<=target){
          Taken= solve(arr,target-arr[ind],ind-1,dp);
      }
      return dp[ind][target]= Taken||notTaken;
  }
    bool isSubsetSum(vector<int>& arr, int target) {
        int m= arr.size();
        vector<vector<int>>dp(m,vector<int>(target+1,-1));
        return solve(arr, target,m-1,dp);
    }
};
