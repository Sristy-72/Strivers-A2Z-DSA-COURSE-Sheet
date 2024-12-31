#Power Set
//Given a string s of length n, find all the possible non-empty subsequences of the string s in lexicographically-sorted order.


// Solution
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	vector<string> result;
	void solve(string &s, int i, string &temp){
	    if(i>=s.length()){
	        if(temp!=""){
	        result.push_back(temp);
	        }
	         return ;
	    }
	    temp.push_back(s[i]);
	    solve(s, i+1,temp);
	    temp.pop_back();
	    solve(s, i+1, temp);
	}
		vector<string> AllPossibleStrings(string s){
		    // Code he
		    string temp ="";
		 solve(s, 0, temp);
		 sort(begin(result), end(result));
		 return result;
		}
};
