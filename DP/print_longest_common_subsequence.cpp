//Problem statement
//You are given two strings ‘s1’ and ‘s2’.
//Return the longest common subsequence of these strings.
//If there’s no such string, return an empty string. If there are multiple possible answers, return any such string.


string findLCS(int n, int m,string &s1, string &s2){
	// Write your code here.
    //  n= s1.size();
    //  m= s2.size();
    // int ans=0;
    vector<vector<int>>dp(n+1, vector<int>(m+1,-1));
    for(int i=0;i<=n;i++){
        dp[i][0]=0;
    }	
    for(int j=0;j<=m;j++){
        dp[0][j]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]= 1+ dp[i-1][j-1];
            }
           else{
               dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
           }
        }
    }
    int i=n;
    int j=m;
    int len= dp[i][j];
   string str= "";
   int index= len-1;
  for (int k = 1; k <= len; k++) {
    str += "$"; 
  }

  while (i > 0 && j > 0) {
    if (s1[i - 1] == s2[j - 1]) {
      str[index] = s1[i - 1];
      index--;
      i--;
      j--;
    } else if (dp[i - 1][j] > dp[i][j - 1]) {
      i--;
    } else j--;
  }

  return str;
}
