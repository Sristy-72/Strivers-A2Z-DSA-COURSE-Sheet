// PROBLEM STATEMENT
//You are given a positive integer ‘n’.
//Your task is to find and return its square root. If ‘n’ is not a perfect square,
//then return the floor value of sqrt(n)

int floorSqrt(int n)
{
    // method 1 which is not working here
//    if(n<2)
//    return n;
//    int start=1;
//    int end=n;
//    int ans;
//    while(start<=end){
//        int mid=start+(end-start)/2;
//        if(mid=n/mid){
//            return mid;
//        }
//        else if(mid<n/mid){
//            start=mid+1;
//            ans=mid;
//        }
//        else
//        end=mid-1;
//    }
// // int ans = sqrt(n);
// return ans;


// approach -2 (using sqrt build-in function)
// int ans=sqrt(x)
// return ans;

// approach -3 (using binary search)
  int low = 1, high = n;
    while (low <= high) {
        long long mid = (low + high) / 2;
        long long val = mid * mid;
        if (val <= (long long)(n)) {
            //eliminate the left half:
            low = mid + 1;
        }
        else {
            //eliminate the right half:
            high = mid - 1;
        }
    }
    return high;
}
