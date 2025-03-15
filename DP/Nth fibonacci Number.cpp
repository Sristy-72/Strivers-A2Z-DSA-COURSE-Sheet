//Problem statement
//The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
   // F(n) = F(n - 1) + F(n - 2), 
    //Where, F(1) = 1, F(2) = 1
//Provided 'n' you have to find out the n-th Fibonacci Number. Handle edges cases like when 'n' = 1 or 'n' = 2
//by using conditionals like if else and return what's expected.

//SOLUTION
#include<bits/stdc++.h>
using namespace std;

int fib(int n,vector<int>&dp){
        // memoization
        // if(n<=1) return n;
        // if(dp[n]!=-1) return dp[n];
        // dp[n]=fib(n-1,dp)+fib(n-2,dp);
        // return dp[n];

   // TABULATION
    dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
                dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];   
}
int main()
{
        int n;
        cin>>n;
       vector<int>dp(n+1,-1);
   // SPACE OPTIMIZATION
     int prev=1;
        int prev2=0;
        for(int i=2;i<=n;i++){
                int curri= prev2+ prev;
                  prev2=prev;
                prev=curri;        
        }
        cout<<prev<<endl;
       //cout<< fib(n,dp)<<endl;
       return 0;
}
