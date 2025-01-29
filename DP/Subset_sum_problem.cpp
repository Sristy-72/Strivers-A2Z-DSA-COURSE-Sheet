//Given an array of positive integers arr[] and a value target, determine if there is a subset of the given array with sum equal to given target. 
//Examples:
//Input: arr[] = [3, 34, 4, 12, 5, 2], target = 9
//Output: true 
//Explanation: Here there exists a subset with target sum = 9, 4+3+2 = 9.


class Solution {
public:
    bool solve(int i, vector<int>& arr, vector<vector<int>>& dp, int target) {
        if (target == 0) return true;  
        if (i == 0) return arr[0] == target; 
        
        if (dp[i][target] != -1) return dp[i][target];

        bool notTaken = solve(i - 1, arr, dp, target);
        bool taken = false;
        if (target >= arr[i]) {
            taken = solve(i - 1, arr, dp, target - arr[i]); 
        }
        
        return dp[i][target] = taken || notTaken;
    }

    bool isSubsetSum(vector<int>& arr, int target) {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(target + 1, -1)); 
        return solve(n - 1, arr, dp, target);
    }
};
