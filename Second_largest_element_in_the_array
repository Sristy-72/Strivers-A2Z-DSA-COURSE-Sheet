class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	   int max1=arr[0];
	   int max2=-1;
	   for(int i=0;i<n;i++){
	       if(max1<arr[i]){
	           max1=arr[i];
	       }
	   }
	   for(int i=0;i<n;i++){
	       if(max2<arr[i]&&arr[i]!=max1){
	           max2=arr[i];
	       }
	   }
	   return max2;
	}
};
