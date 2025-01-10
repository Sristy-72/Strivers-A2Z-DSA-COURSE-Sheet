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
    int minimumEnergy(vector<int>& height, int n) {
        vector<int>dp(n,0);
        dp[0]=0;
        for(int i=1;i<n;i++){
            int fs = dp[i-1]+ abs(height[i]-height[i-1]);
            int ss = INT_MAX;
            if(i>1)
            ss= dp[i-2]+ abs(height[i]-height[i-2]);
            dp[i]= min(fs, ss);
        }
        return dp[n-1];
    }
};
