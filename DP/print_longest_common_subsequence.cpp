//Problem statement
//You are given two strings ‘s1’ and ‘s2’.
//Return the longest common subsequence of these strings.
//If there’s no such string, return an empty string. If there are multiple possible answers, return any such string.


class Solution {
  public:
    string solve(string &s1, string &s2,int n, int m,vector<vector<int>> &dp) {

        for (int i = 0; i <= n; i++) {
            dp[i][0] = 0;
        }
        for (int j = 0; j <= m; j++) {
            dp[0][j] = 0;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s1[i - 1] == s2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        int len = dp[n][m];
        int i = n;
        int j = m;

        int index = len - 1;
        string str(len, '$');

        while (i > 0 && j > 0) {
            if (s1[i - 1] == s2[j - 1]) {
                str[index] = s1[i - 1];
                index--;
                i--;
                j--;
            } else if (dp[i - 1][j] > dp[i][j - 1]) {
                i--;
            } else {
                j--;
            }
        }

        return str;
    }

    string lcs(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        return solve(str1, str2, dp,n-1,m-1);
    }
};
