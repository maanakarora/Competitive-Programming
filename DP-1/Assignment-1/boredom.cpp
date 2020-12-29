#include<bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> A){

	int *freq = new int[1001]();
	int *dp = new int[1001]();
	for(int i=0; i<n; i++){
		freq[A[i]]++;
	}
	dp[1] = freq[1];
	int max_val = INT_MIN;
	for(int i=0; i<n; i++){
		max_val = max(A[i], max);
	}
	for(int i=2; i<=max_val; i++){
		dp[i] = max(dp[i-1], i*freq[i] + dp[i-2]);
	}
	int ans = dp[max_val];
	delete[]dp;
	delete[]freq;
	return ans;
}

int main(){

	
	return 0;
}