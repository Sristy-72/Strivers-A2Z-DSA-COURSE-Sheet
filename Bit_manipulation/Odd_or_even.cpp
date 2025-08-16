//Given a positive integer n, determine whether it is odd or even. Return true if the number is even and false if the number is odd.

class Solution {
  public:
    bool isEven(int n) {
        // code here
        if((n&1)==0) return true;
        else return false;
    }
};
