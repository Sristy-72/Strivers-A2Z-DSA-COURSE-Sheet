//Given an integer array height[] where height[i] represents the height of the i-th stair, 
//a frog starts from the first stair and wants to reach the last stair. From any stair i,
//the frog has two options: it can either jump to the (i+1)th stair or the (i+2)th stair.
//The cost of a jump is the absolute difference in height between the two stairs. Determine the minimum total cost required for the frog to reach the last stair.

//Example:

//Input: heights[] = [20, 30, 40, 20]
//Output: 20


// memoization
class Solution {
  public:
  int solve(vector<int>&height, int ind, vector<int>&dp){
      if(ind==0) return 0;
      if(dp[ind]!=-1) return dp[ind];
      int onestep= abs(height[ind]-height[ind-1])+ solve(height, ind-1,dp);
      int twostep= INT_MAX;
      if(ind>1){
       twostep= abs(height[ind]-height[ind-2])+ solve(height, ind-2, dp);
      }
      return dp[ind]= min(onestep, twostep);
  }
    int minCost(vector<int>& height) {
        // Code here
        int n= height.size();
        vector<int>dp(n,-1);
        return solve(height, n-1, dp);
    }
};



int minCost(vector<int>& height) {
        // Code here
        int n= height.size();
        vector<int>dp(n,-1);

  // TABULATION

  
    //      dp[0]=0;
    //   // return solve(height, n-1, dp);
       
    //   for(int ind=1;ind<n;ind++){
    //       int onestep= abs(height[ind]-height[ind-1])+dp[ind-1];
    //       int twostep= INT_MAX;
    //   if(ind>1){
    //   twostep= abs(height[ind]-height[ind-2])+ dp[ind-2];
    //   } 
    //   dp[ind]= min(onestep, twostep);
    //   }
    //   return dp[n-1];
    
    // space-optimization
    
    int prev1= 0;
    int prev2=0;
    for(int i=1;i<n;i++){
        int twostep= INT_MAX;
        int onestep= abs(height[i-1]-height[i])+prev1;
        if(i>1){
            twostep= abs(height[i-2]-height[i]) +prev2;
        }
        int curr= min(onestep, twostep);
        prev2=prev1;
        prev1= curr;
    }
    return prev1;
    }
};
