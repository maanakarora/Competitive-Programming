#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll merge(int A[], int left, int mid, int right){
	int i = left, j = mid, k=0;
	ll count = 0;
	ll temp[right-left+1];
	while(i<mid && j<=right){
		if(A[i] <= A[j]){
			temp[k++] = A[i++];
		}
		else{
			temp[k++] = A[j++];
			count += mid-i;
		}
	}
	while(i<mid){
		temp[k++] = A[i++];
	}
	while(j<=right){
		temp[k++] = A[j++];
	}
	for(int i = left,k=0; i<=right; i++,k++){
		A[i] = temp[k];
	}
	return count;
}

ll merge_sort(int A[], int left, int right){
	ll count = 0;
	if(left<right){
		int mid = left + (right-left)/2;

		long long count_left = merge_sort(A,left,mid);
		long long count_right = merge_sort(A,mid+1,right);
		long long myCount = merge(A,left,mid+1,right);
		return myCount + count_left + count_right; 
	}
	return count; 
}

long long solve(int A[],int n){
	long long ans = merge_sort(A,0,n-1);
	return ans;
}

int main(){
	int a[] = {5,4,2,3,1};
	cout << solve(a,5) << endl;
	return 0;
}