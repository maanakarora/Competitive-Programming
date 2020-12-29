#include<bits/stdc++.h>
using namespace std;

int findMaxSquareWithAllZeros(int **arr, int n, int m)
{
    int maxArea = 0;
    int **dp = new int*[n];
    for(int i=0; i<n; i++){
        dp[i] = new int[m];
    }
    for(int i=0; i<n; i++){
        if(arr[i][0] == 0){
            dp[i][0] = 1;
            maxArea = 1;
        }
        else{
            dp[i][0] = 0;
        }
    }
    for(int j=1; j<m; j++){
        if(arr[0][j] == 0){
            dp[0][j] = 1;
            maxArea = 1;
        }
        else{
            dp[0][j] = 0;
        }
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            if(arr[i][j] == 0){
                dp[i][j] = min(dp[i][j-1], min(dp[i-1][j], dp[i-1][j-1])) + 1;
            	if(dp[i][j] > maxArea){
                	maxArea = dp[i][j];
            	}
            }
            else{
                dp[i][j] = 0;
            }
        }
    }
    return maxArea;
}

int main(){

	return 0;
}