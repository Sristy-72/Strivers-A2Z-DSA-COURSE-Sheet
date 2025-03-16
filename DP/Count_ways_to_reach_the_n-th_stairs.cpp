//You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair.
//Each time, you can climb either one step or two steps.
//You are supposed to return the number of distinct ways you can climb from the 0th step to the Nth step.


//SOLUTION

#include <bits/stdc++.h> 
// int ways(vector<int>& dp, int n) {
//     if (n <= 1) return 1;  // Base case: 1 way to reach stair 0 or 1
//     if (dp[n] != -1) return dp[n]; // Use precomputed result

//     dp[n] = ways(dp, n - 1) + ways(dp, n - 2); // Memoization
//     return dp[n];
// }
const int MOD = 1e9 + 7;
int countDistinctWays(int nStairs) {
    vector<int> dp(nStairs + 1, -1);
    if (nStairs == 0) return 1;
    if (nStairs == 1) return 1;
   int prev1=1;
   int prev2=1;
   for(int i=2;i<=nStairs;i++){
       int curr= (prev1+prev2)%MOD; // to prevent overflow
       prev2=prev1;
       prev1= curr;
   }
   return prev1;

}
