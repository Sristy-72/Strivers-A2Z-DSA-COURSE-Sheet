//Given an array of integers arr[]  and a number k. Return the maximum sum of a subarray of size k.

//Input: arr[] = [100, 200, 300, 400] , k = 2
//Output: 700
//Explanation: arr3  + arr4 = 700, which is maximum.

class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        // int n = arr.size();
        // int maxi= INT_MIN;
       
        // for(int i=0;i+k<=n;i++){
        //      int sum=0;
        //     for(int j=i;j<i+k;j++){
        //         sum =sum+arr[j];
                
        //     }
        //     if(sum>maxi)
        //     maxi= sum;
        // }
        // return  maxi
        int n= arr.size();
        int maxi= 0;
       
       int sum=0;
       for(int i=0;i<k;i++){
           sum= sum+ arr[i];
       }
       int curr_sum= sum;
       if(k>n) return sum;
       for(int i=k;i<n;i++){
           curr_sum= curr_sum+ arr[i]- arr[i-k];
           sum= max(sum, curr_sum);
       }
       return sum;
    }
};
