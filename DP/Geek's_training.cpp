//Geek is going for a training program. He can perform any of these activities:
//Running, Fighting, and Learning Practice. Each activity has some point on each day.
//As Geek wants to improve all his skills, he can't do the same activity on two consecutive days.
//Given a 2D array arr[][] where arr[i][0], arr[i][1], and arr[i][2] represent the merit points 
//for Running, Fighting, and Learning on the i-th day, determine the maximum total merit points Geek can achieve .

//Example:

//Input: arr[]= [[1, 2, 5], [3, 1, 1], [3, 3, 3]]
//Output: 11





// 1st approach (recursion+memoization)
//TC(N*#*4)
//SC= O(N) + O(N*4)


#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
  int solve(vector<vector<int>>&dp,vector<vector<int>>&arr, int day, int last){
       if (dp[day][last] != -1) return dp[day][last];
      if(day==0){
          int maxi=0;
          for(int i=0;i<3;i++){
              if(i!=last){
              maxi=max(maxi, arr[day][i]);
              }
             
          }
           return maxi;
      }
          int maxi=0;
          for(int i=0;i<3;i++){
              if(i!=last){
                  int activity=arr[day][i] +solve(dp,arr, day-1,i);
                  maxi=max(maxi,activity);
              }
          }
          return dp[day][last]=maxi;
          
  }
    int maximumPoints(vector<vector<int>>& arr) {
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(4,-1));
        
        return solve(dp,arr,n-1,3);
    }
};

