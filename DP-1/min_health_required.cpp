#include<bits/stdc++.h>
using namespace std;

int getMinimumStrength(int** grid, int n, int m) {
    int **dp = new int*[n];
	for(int i=0; i<n; i++){
        dp[i] = new int[m];
    }
    dp[n-1][m-1] = 1;
    dp[n-1][m-2] = 1;
    dp[n-2][m-1] = 1;
    // filling last column // base case 1
    for(int i=n-3; i>=0; i--){
        dp[i][m-1] = max(1, dp[i+1][m-1] - grid[i+1][m-1]);
    }
    // filling last row // base case 2
    for(int j=m-3; j>=0; j--){
        dp[n-1][j] = max(1, dp[n-1][j+1] - grid[n-1][j+1]);
    }
    
    for(int i=n-2; i>=0; i--){
        for(int j=m-2; j>=0; j--){
            dp[i][j] = min((dp[i+1][j] - grid[i+1][j]), (dp[i][j+1] - grid[i][j+1]));
            if(dp[i][j] < 1){
                dp[i][j] = 1;
            }
        }
    }
    int ans = dp[0][0];
    for(int i=0; i<n; i++){
        delete [] dp[i];
    }
    delete [] dp;
    return ans;
}

int main(){

	int t;
	cin >> t;
	while(t--){
		int r,c;
		cin >> r >> c;
		int **grid = new int* [r];
		for(int i=0;i<r;i++){
			grid[i] = new int[c];
			for(int j=0;j<c;j++){
				cin >> grid[i][j];
			}
		}
		cout << getMinimumStrength(grid,r,c)<< endl;
		for(int i=0;i<r;i++){
			delete [] grid[i];
		}
		delete [] grid;
	}
	return 0;
}