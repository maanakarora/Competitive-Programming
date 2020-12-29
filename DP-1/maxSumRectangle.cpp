#include<bits/stdc++.h>
using namespace std;

int kadane(int *a, int n){
	int curr_sum = 0; 
	int best_sum = INT_MIN;
	for(int i=0; i<n; i++){
		curr_sum += a[i];
		best_sum = max(best_sum, curr_sum);
		if(curr_sum < 0){
			curr_sum = 0;
		}
	}
	return best_sum;
}

int max_sum_rectangle(int **arr, int n, int m){

	int ans = INT_MIN;
	for(int l=0; l<m; l++){
		int *sum = new int[n]();
		for(int r=l; r<m; r++){
			for(int i=0; i<n; i++){
				sum[i] += arr[i][r];
			}
			ans = max(kadane(sum,n), ans);
		}
		delete [] sum;
	}
	return ans;
}

int main(){

	int n, m;
	cin >> n >> m;
	int **arr = new int*[n];
	for(int i=0;i<n;i++){
		arr[i] = new int[m];
		for(int j=0; j<m; j++){
			cin >> arr[i][j];
		}
	}

	cout << max_sum_rectangle(arr,n,m) << endl;
	for(int i=0; i<n; i++){
        delete [] arr[i];
    }
    delete [] arr;
	return 0;
}