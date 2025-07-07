//Longest Subarray with Sum K


//Given an array arr[] containing integers and an integer k, your task is to find the length of the longest subarray where the sum of
//its elements is equal to the given value k. If there is no subarray with sum equal to k, return 0.

//Input: arr[] = [10, 5, 2, 7, 1, -10], k = 15
//Output: 6

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
       int n= arr.size();
       int sum= 0;
       int maxlen=0;
       unordered_map<int,int>mp;
       mp[0]=-1;
       
       for(int i=0;i<n;i++){
           sum= sum+ arr[i];
           if(sum==k) {
               maxlen= i+1;
           }
           if(mp.find(sum-k)!=mp.end()){
               maxlen= max(maxlen, i-mp[sum-k]);
           }
           if(mp.find(sum)==mp.end()){
             mp[sum]= i;  
           }
       }
       return maxlen;
        
    }
};
