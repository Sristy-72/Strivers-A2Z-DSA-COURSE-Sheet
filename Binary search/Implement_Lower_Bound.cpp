//problem link:- https://bit.ly/43967G5
//PROBLEM STATEMENT

// Qs.You are given an array 'arr' sorted in non-decreasing order and a number 'x'. You must return the index of the lower bound of 'x'.
// Note:
// 1. For a sorted array 'arr', 'lower_bound' of a number 'x' is defined as the smallest index 'idx' such that the value 'arr[idx]' is not less 
// than 'x'.If all numbers are smaller than 'x', then 'n' should be the 'lower_bound' of 'x', where 'n' is the size of array.
//Solution


int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int st=0;
	int end=n-1;
	int ans=n;
	while(st<=end){
		int mid=(st+end)/2;
    // maybe an answer
		if(arr[mid]>=x){
        ans=mid;
      //look for smaller index on the left
		end=mid-1;
		}
		else
		st=mid+1;// look on the right
	}
	return ans;
}
