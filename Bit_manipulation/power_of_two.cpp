//Given a non-negative integer n. You have to check if it is a power of 2 or not. 

//Examples

//Input: n = 8
//Output: true
//Explanation: 8 is equal to 2 raised to 3 (23 = 8).
class Solution {
  public:
    bool isPowerofTwo(int n) {
        // code here
    //      if (n <= 0) return false;
    //     int pow=1;
    //   while(n>pow){
    //       pow=pow*2;
    //   }
    //   return pow==n;
    int val= n& (n-1);
    if(val==0) return true;
    else return false;
    }
};
