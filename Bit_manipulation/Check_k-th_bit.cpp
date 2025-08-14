//Given two positive integer n and  k, check if the kth index bit of n is set or not.
 //Note: A bit is called set if it is 1. 
//Examples : 

//Input: n = 4, k = 0
//Output: false
//Explanation: Binary representation of 4 is 100, in which 0th index bit from LSB is not set. So, return false.

class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        int rem=0;
        int cnt=0;
        while(n>0){
            rem= n%2;
            if(rem==1 && cnt==k){
                return true;
            }
            cnt++;
            n= n/2;
        }
        return false;
    }
};
