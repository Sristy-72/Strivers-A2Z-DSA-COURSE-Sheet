class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	   int largest=arr[0];
	   int s_largest=INT_MIN;
	   for(int i=0;i<n;i++){
	       if(largest<arr[i]){
	           largest=arr[i];
	       }
	   }
	   for(int i=0;i<n;i++){
	       if(s_largest<arr[i]&&arr[i]!=largest){
	           s_largest=arr[i];
	       }
	   }
	   return s_largest;
	}
};
