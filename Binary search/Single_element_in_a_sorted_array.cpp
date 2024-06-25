
//Problem statement
//You are given a sorted array ‘arr’ of ‘n’ numbers such that every number 
//occurred twice in the array except one, which appears only once.
//Return the number that appears once.

//SOLUTION
int singleNonDuplicate(vector<int>& arr)
{
int n=arr.size();
if(n==1) return arr[0];
if(arr[0]!=arr[1])return arr[0];
if(arr[n-1]!=arr[n-2]) return arr[n-1];// eliminating the edge cases
int low=1, high=n-2;
while(low<=high){
	int mid=(low+high)/2;
	if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]) return arr[mid];//mid is the only single element 
	if((mid%2==1 && arr[mid]==arr[mid-1]) || (mid%2==0 && arr[mid]==arr[mid+1])){// we are on the left and the element is on the right
		low=mid+1;
	}
	else{// we are on the right
		high=mid-1;
	}
}
return -1;
}
