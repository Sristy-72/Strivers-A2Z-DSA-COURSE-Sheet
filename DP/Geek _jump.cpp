// PROBLEM STATEMENT
// Geek wants to climb from the 0th stair to the (n-1)th stair. At a time the Geek can climb either one or two steps.
//A height[N] array is also given. Whenever the geek jumps from stair i to stair j, the energy consumed in the jump is 
//abs(height[i]- height[j]), where abs() means the absolute difference. return the minimum energy that can be used by the Geek to jump from stair 0 to stair N-1.

//Example:
//Input: n = 4, height = {10 20 30 10}
//Output: 20

// SOLUTION

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
// MEMOIZATION
 int solve(vector<int>&height,int ind,vector<int>&dp){ 
     if(ind==0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int firststep= solve(height, ind-1,dp) + abs(height[ind]-height[ind-1]);
    int secondstep=INT_MAX;
    if(ind>1) {
        secondstep=solve(height, ind-2,dp) + abs(height[ind]-height[ind-2]);
    }
    return dp[ind]= min(firststep,secondstep);
  }


    int minimumEnergy(vector<int>& height, int n) {
        vector<int>dp(n,0);

      // TABULATION
        dp[0]=0;
        for(int i=1;i<n;i++){
            int fs = dp[i-1]+ abs(height[i]-height[i-1]);
            int ss = INT_MAX;
            if(i>1)
            ss= dp[i-2]+ abs(height[i]-height[i-2]);
            dp[i]= min(fs, ss);
        }
      // return solve(height,n-1,dp)
        return dp[n-1];

      // SPACE OPTIMIZATION
       int prev1=0;
    int prev2=0;
    for(int i=1;i<n;i++){
        int firststep= prev1+ abs(height[i]-height[i-1]);
        int secondstep=INT_MAX;
        if(i>1)
            secondstep= prev2+abs(height[i]-height[i-2]);
            int curr= min(firststep,secondstep);
            prev2=prev1;
            prev1= curr;
        
    }
        return prev1;
    }
};
