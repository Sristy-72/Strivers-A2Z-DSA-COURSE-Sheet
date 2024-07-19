//Problem statement
//You are given two positive integers 'n' and 'm'. You have to return the 'nth' root of 'm', i.e. 'm(1/n)'. If the 'nth root is not an integer, return -1.
//Note:
//'nth' root of an integer 'm' is a number, which, when raised to the power 'n', gives 'm' as a result.

// solution
int func(int mid,int n,int m){
  long long ans=1;
  for (int i = 1; i <= n; i++) {
    ans = ans * mid;
    if (ans > m)
      return 2;
  }
    if (ans == m)return 1;
  return 0;
}

int NthRoot(int n, int m) {
 int start=1;
 int end=m;
 while(start<=end){
   int mid=(start+end)/2;
   int midn=func(mid,n,m);
   if(midn==1){
     return mid;
   }
   else if(midn==0){
     start=mid+1;
   }
   else
   end=mid-1;

 } 
 return -1;
}
