// PROBLEM STATEMENT
//A thief wants to rob a store. He is carrying a bag of capacity W. The store has ‘n’ items. 
//Its weight is given by the ‘wt’ array and its value by the ‘val’ array. He can either include
//an item in its knapsack or exclude it but can’t partially have it as a fraction. We need to
//find the maximum value of items that the thief can steal.

//SOLUTION(MEMOIZATION)
int solve(vector<vector<int>>&dp,vector<int>&values,vector<int>&weights,int n, int w){
	if(n==0 || w==0) return 0;
	if(dp[n][w]!=-1) return dp[n][w];
	
	int notTaken=solve(dp,values,weights,n-1,w);
	int taken=0;
	if(weights[n-1]<=w){
	taken=values[n-1]+ solve(dp,values,weights,n-1,w-weights[n-1] );
	}
	return dp[n][w]= max(taken,notTaken);
}
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	vector<vector<int>>dp(n+1,vector<int>(w+1,-1));
	return solve(dp,values, weights, n,w);
}
