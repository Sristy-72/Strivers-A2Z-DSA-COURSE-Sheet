// PROBLEM STATEMENT
//Given an array arr of non-negative integers and an integer target, the task is to count all subsets of the array whose sum is equal to the given target.
//Examples:
//Input: arr[] = [5, 2, 3, 10, 6, 8], target = 10
//Output: 3
//Explanation: The subsets {5, 2, 3}, {2, 8}, and {10} sum up to the target 10.

//SOLUTION

// MEMOIZATION
class Solution {
  public:
   const int mod = 1e9+7;

  int solve(vector<vector<int>>&dp, vector<int>&arr, int target,int ind){
     // if(ind==0) return (arr[0]==target) ?1:0;
     if(ind == 0){
    if(target == 0 && arr[0] == 0) return 2; // pick or not pick
    if(target == 0 || arr[0] == target) return 1;
    return 0;
}

      if(dp[ind][target]!=-1) return dp[ind][target];
      int notTaken= solve(dp,arr, target,ind-1);
      int taken= 0;
      if(arr[ind]<=target){
          taken=solve(dp,arr,target-arr[ind],ind-1);
      }
      return dp[ind][target]=(taken+notTaken)%mod;
  }
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int n= arr.size();
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return solve(dp,arr,target,n-1);
    }
};
