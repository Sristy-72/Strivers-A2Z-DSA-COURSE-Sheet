//Given a positive integer n. Your task is to return the count of set bits.
//Examples:
//Input: n = 6
//Output: 2
//Explanation: Binary representation is '110', so the count of the set bit is 2

class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
        int cnt=0;
        if(n==1) cnt++;
        while(n>0){
            if(n%2==1) cnt++;
            n=n/2;
        }
        
        return cnt;
    }
};
