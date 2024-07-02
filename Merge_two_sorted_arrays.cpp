//Problem statement(CODE 360)
//Given two sorted arrays, ‘a’ and ‘b’, of size ‘n’ and ‘m’, respectively, return the union of the arrays.
//The union of two sorted arrays can be defined as an array consisting of the common and the distinct
//elements of the two arrays. The final array should be sorted in ascending order.
//Note: 'a' and 'b' may contain duplicate elements, but the union array must contain unique elements.

// solution
// APPROACH:-1(using set)
#include<bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n=a.size();
    int m=b.size();
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<m;i++){
        st.insert(b[i]);
    }
    vector<int>temp;// this one is for returning the answer
    for(auto it:st){
        temp.push_back(it);
    }
return temp;
}
