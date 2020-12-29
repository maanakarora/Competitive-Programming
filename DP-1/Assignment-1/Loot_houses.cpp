#include<bits/stdc++.h>
using namespace std;

// -----------------------------------ITERATIVELY DP ------------------------------------------
int maxMoneyLooted(int *arr, int n)
{
	int *dp = new int[n];
	dp[0] = arr[0];
	dp[1] = max(arr[0], arr[1]);
	for(int i=2; i<n; i++){
		dp[i] = max(arr[i] + dp[i-2], dp[i-1]);
	}
    return dp[n-1];
}

// ------------------------------------RECURSIVELY DP------------------------------------------

int MaxMoneyHelper(int arr[], int n, int i=0, int *temp=new int[10002]()){

    if(i>=n)
	{
		return 0;
	}
    if(temp[i]>0)
    {
        return temp[i];
    }
	int maximum=0;
	int including=arr[i]+getMaxMoney(arr, n, i+2, temp);
	int not_including=getMaxMoney(arr,n, i+1, temp);
	maximum=max(including, not_including);
    temp[i]=maximum;
	return maximum;
}

int maxMoneyLooted(int *arr, int n)
{
	//Write your code here
    return getMaxMoney(arr,n);
}
int main(){

	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << maxMoneyLooted(arr, n) << endl;

	delete[] arr;
	return 0;
}