//Problem Statement: Given an array of N integers, write a program to implement the Bubble Sorting algorithm.

#include<bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int>&arr ,int n){
  for(int i=n-1;i>=0;i--)
  {
   for(int j=0;j<n-1;j++){
     if(arr[j]>arr[j+1]){
       swap(arr[j],arr[j+1]);
     }
   }
    return 0;
  }
