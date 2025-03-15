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
        
        if(n<=1) return n;
        if(dp[n]!=-1) return dp[n];
        dp[n]=fib(n-1,dp)+fib(n-2,dp);
        return dp[n];
}
int main()
{
        int n;
        cin>>n;
       vector<int>dp(n+1,-1);
       cout<< fib(n,dp)<<endl;
       return 0;
}
