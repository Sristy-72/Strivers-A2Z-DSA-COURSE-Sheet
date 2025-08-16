//Given a number n and a value k. From the right, set the kth bit in the binary representation of n. 
//The position of the Least Significant Bit(or last bit) is 0, the second last bit is 1 and so on. 

//Examples:

//Input: n = 10, k = 2
//Output: 14
//Explanation: Binary representation of the given number 10 is: 1 0 1 0, number of bits in the binary reprsentation is 4.
//Thus 2nd bit from right is 0. The number after changing this bit to 1 is: 14(1 1 1 0).

class Solution {
  public:
    int setKthBit(int n, int k) {
        // Code here
        int val= (1<<k);
        int ans= val | n;
        return ans;
    }
};
