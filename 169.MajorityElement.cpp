#include <bits/stdc++.h>
int findMajorityElement(int arr[], int n) {
  // Better approach
	// map<int,int>mpp;
	// for(int i=0;i<n;i++){
	// 	mpp[arr[i]]++;
	// }
	// for(auto it:mpp){
	// 	if(it.second>n/2){
	// 		return it.first;
	// 	}
	// }
	// return -1;
	//optimal approach using Moore's voting algorithm
	int maj=arr[0];
	int cnt=0;
	for(int i=0;i<n;i++){
		if(cnt==0){
			maj=arr[i];
           cnt=1;
		}
		else if(maj==arr[i]){
			cnt++;
		}
		else
		cnt--;
	}
	int cnt1=0;
	for(int i=0;i<n;i++){
		if(arr[i]==maj){
			cnt1++;
		}
		if(cnt1>(n/2)){
			return maj;
		}
	}
	return -1;
	// return maj;
}
