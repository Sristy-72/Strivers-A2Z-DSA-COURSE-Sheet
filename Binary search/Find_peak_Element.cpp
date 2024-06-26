//PROBLEM STATEMENT
//You are given an array 'arr' of length 'n'. Find the index(0-based) of a peak element in the array.
//If there are multiple peak numbers, return the index of any peak number.
//Peak element is defined as that element that is greater than both of its neighbors.
//If 'arr[i]' is the peak element, 'arr[i - 1]' < 'arr[i]' and 'arr[i + 1]' < 'arr[i]'.
//Assume 'arr[-1]' and 'arr[n]' as negative infinity.

// SOLUTION
int findPeakElement(vector<int> &arr) {
    // Write your code here
     int s=0, e= arr.size()-1;
         int mid;
         int n=arr.size();
         // Edge cases:
    if (n == 1) return 0;
    if (arr[0] > arr[1]) return 0;
    if (arr[n - 1] > arr[n - 2]) return n - 1;

        while(s<=e){
            //1 6 3  2 1 -> if we take this condition then it will try to comapare 1 with less than 1 which is not present in the array so it will give error
            int mid= e+(s-e)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){// peak element
                return mid; // if we find that mid is the largest the we will retun the mid directly
            }
            else if(arr[mid]>arr[mid-1]){
                s=mid+1;// we will go to right side
            }
            else 
            e=mid-1; // else we will go to left side
        }
        return -1;
}
