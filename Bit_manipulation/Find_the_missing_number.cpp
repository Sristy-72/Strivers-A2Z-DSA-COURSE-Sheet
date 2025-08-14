//You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive).
//This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element.

//Examples:

//Input: arr[] = [1, 2, 3, 5]
//Output: 4

class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n= arr.size()+1;
        int xor1=0;
        int xor2=0;
        for(int i=0;i<n-1;i++){
            xor1= xor1^arr[i];
        }
        for(int i=1;i<=n;i++){
            xor2= xor2^i;
        }
        return xor2^xor1;
    }
};
