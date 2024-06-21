//PROBLEM STATEMENT
//You are given a sorted array ‘arr’ containing ‘n’ integers and an integer ‘x’.Implement the ‘upper bound’
//function to find the index of the upper bound of 'x' in the array.
// Note:
// 1. The upper bound in a sorted array is the index of the first value that is greater than a given value. 
// 2. If the greater value does not exist then the answer is 'n', Where 'n' is the size of the array.
// 3. Try to write a solution that runs in log(n) time complexity.
// SOLUTION

int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
// THROUGH STL
//int upper_bound=upper_bound(arr.begin(),arr.end(),x) 
	int st=0;
	int end=n-1;
	int ans=n;
	while(st<=end){
		int mid=(st+end)/2;
		if(arr[mid]>x){
			ans=mid;
			end=mid-1;
                } else {
                        st = mid + 1;
                }

        }	
		return ans;
}
