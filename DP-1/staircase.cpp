#include<bits/stdc++.h>
using namespace std;

int staircase(int n, int *dp){

	if(n==0 || n==1){
		return 1;
	}
	else if(n==2){
		return 2;
	}
	if(dp[n] > 0){
		return dp[n];
	}
	int smallerOutput = staircase(n-1,dp) + staircase(n-2,dp) + staircase(n-3,dp);
	dp[n] = smallerOutput;
	return dp[n];
}

long staircase(int n){
	long *arr = new long[n+1];
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 2;
	for(int i=3; i<=n;i++){
		arr[i] = arr[i-3] + arr[i-2] + arr[i-1];
	}
	return arr[n];
}

int main(){

	int n;
	cin >> n;
	int *dp = new int[n+1];
	for(int i=0;i<n;i++){
		dp[i] = 0;
	}
	cout << staircase(n,dp) << endl;
	cout << staircase(n) << endl;

	return 0;
}