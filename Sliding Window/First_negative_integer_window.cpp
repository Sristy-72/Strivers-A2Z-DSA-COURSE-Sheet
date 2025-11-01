//Given an array arr[]  and a positive integer k, find the first negative integer for each and every window(contiguous subarray) of size k.
//Note: If a window does not contain a negative integer, then return 0 for that window.
//Input: arr[] = [-8, 2, 3, -6, 10] , k = 2
//Output: [-8, 0, -6, -6]


class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        int n= arr.size();
        int first_neg=0;
        vector<int>result;
       queue<int>q;
       for(int i=0;i<n;i++){
           if(arr[i]<0)
           q.push(i);
           if(!q.empty() && q.front()<=i-k){
               q.pop();
           }
           if(i>=k-1){ // i ki value  k ya ke se barabar ho chuki hai
               
              if(!q.empty()) result.push_back(arr[q.front()]);
              else result.push_back(0); // agar window size hit ho gaya phir bhi negative element nahi mila tab ye chalega
           }
       }
        return result;
    }
};
