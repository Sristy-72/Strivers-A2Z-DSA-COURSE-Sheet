//Given an array arr[] of integers and an integer k, your task is to find the maximum 
//value for each contiguous subarray of size k. The output should be an array of maximum values corresponding to each contiguous subarray.


//Input: arr[] = [1, 2, 3, 1, 4, 5, 2, 3, 6], k = 3
//Output: [3, 3, 4, 5, 5, 5, 6] 
//Explanation: 
//1st contiguous subarray = [1 2 3] max = 3
//2nd contiguous subarray = [2 3 1] max = 3
//3rd contiguous subarray = [3 1 4] max = 4
//4th contiguous subarray = [1 4 5] max = 5
//5th contiguous subarray = [4 5 2] max = 5
//6th contiguous subarray = [5 2 3] max = 5
//7th contiguous subarray = [2 3 6] max = 6


//SOLUTION

class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        int n= arr.size();
        deque<int>dq;
        vector<int>ans;
        for(int i=0;i<k;i++){
            
            while(!dq.empty() && dq.back()<arr[i]){
                dq.pop_back();
            }
            dq.push_back(arr[i]);
            
        }
        ans.push_back(dq.front());
      //Remaining elements
        for(int i=k;i<n;i++){

           // Remove smaller elements from back
            while(!dq.empty() &&  dq.back()<arr[i]){
                dq.pop_back();
                
            }
         //// Remove the element going out of the window 
            if(!dq.empty() && dq.front()==arr[i-k]){
                    dq.pop_front();
                }
                dq.push_back(arr[i]);
                ans.push_back(dq.front());
        }
       
        return ans;
    }
};
