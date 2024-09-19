//Problem Statement: Given an array of N integers, write a program to implement the Selection sorting algorithm.


void selection_sort(vector<int>&arr, int n){
for(int i=0;i<n-1;i++){
 int index=i;
for(int j=i+1;j<n;j++){
if(arr[j]<arr[index]){
index=j;
}
swap(arr[i],arr[index]);
}
}
  return 0;
}
