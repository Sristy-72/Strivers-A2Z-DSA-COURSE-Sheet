//PROBLEM STATEMENT
//There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).
// Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such
//that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 
//For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].
// Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.
// You must decrease the overall operation steps as much as possible.

// SOLUTION 
class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n=arr.size();
    int st=0;
    int end=n-1;    
    while(st<=end){
        int mid=(st+end)/2;
        if(arr[mid]==target)
        return true;
        if(arr[st]==arr[mid] && arr[mid]==arr[end]){
            st=st+1;
            end=end-1;
            continue;
        }
         if(arr[st]<=arr[mid]){//left side sorted
            if(target>=arr[st] && target<=arr[mid]){
            end=mid-1;
            }
            else{
            st=mid+1;
            }
        }
        else{
            if(target>=arr[mid] && target<=arr[end]){// right side sorted
                st=mid+1;
            }
            else{
            end=mid-1;
            }
        }
    }
    return false;
    }
};
