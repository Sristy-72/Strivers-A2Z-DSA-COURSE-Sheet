//Given a word pat and a text txt. Return the count of the occurrences of anagrams of the word in the text.

//Input: txt = "forxxorfxdofr", pat = "for"
//Output: 3
//Explanation: for, orf and ofr appears in the txt, hence answer is 3.

// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
        int k= pat.length();
        int n= txt.length();
        int cnt=0;
        unordered_map<char,int>m1;
        for(char ch:pat){
            m1[ch]++;
        } 
        unordered_map<char,int>m2;
        for(int i=0;i<k;i++){
            m2[txt[i]]++;
        }
        for(int i=k;i<n;i++){
          
        
         if(m1==m2){ 
             cnt++;
             }
             m2[txt[i-k]]--;
             if(m2[txt[i-k]]==0) m2.erase(txt[i-k]);
             m2[txt[i]]++;
         
         } 
         if(m1==m2) cnt++;
    return cnt;
    }
};
