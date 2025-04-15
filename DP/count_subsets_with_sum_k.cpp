//ou are given an array 'arr' of size 'n' containing positive integers and a target sum 'k'.
//Find the number of ways of selecting the elements from the array such that the sum of 
//chosen elements is equal to the target 'k'.
//Since the number of ways can be very large, print it modulo 10 ^ 9 + 7.

const int mod= 1e9+7;
// int solve(vector<vector<int>>&dp, vector<int>&arr, int k, int ind){
// 	if(k==0) return 1;
// 	if(ind==0) return (arr[0]==k) ?1:0;
// 	if(dp[ind][k]!=-1) return dp[ind][k];
// 	int taken=0;

// 	int notTaken= (solve(dp, arr, k,ind-1))%mod;
// 	if(arr[ind]<=k){
// 		taken= (solve(dp,arr,k-arr[ind],ind-1))%mod;
// 	}
// 	return dp[ind][k]=( taken+notTaken)%mod;
// }


int findWays(vector<int>& arr, int k) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(k + 1, 0));

    // Base case
    dp[0][0] = 1;
    if (arr[0] <= k)
        dp[0][arr[0]] += 1;

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j <= k; ++j) {
            int notTaken = dp[i - 1][j] % mod;
            int taken = 0;
            if (arr[i] <= j)
                taken = dp[i - 1][j - arr[i]] % mod;

            dp[i][j] = (taken + notTaken) % mod;
        }
    }

    return dp[n - 1][k];
}
