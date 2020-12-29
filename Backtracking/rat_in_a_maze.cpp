#include<bits/stdc++.h>
using namespace std;

void printSolution(int **solution_matrix, int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << solution_matrix[i][j] << " ";
		}
	}
	cout << endl; 
}

void rat_in_a_maze_helper(int maze[][20], int **solution_matrix, int n, int row, int col){

	if(row==n-1 && col==n-1){
		solution_matrix[row][col] = 1;
		printSolution(solution_matrix,n);
		solution_matrix[row][col] = 0;
		return;
	}

	if(row>=n || row<0 || col>=n || col<0 || maze[row][col]==0 || solution_matrix[row][col]==1){
		return;
	}
	solution_matrix[row][col] = 1;
	rat_in_a_maze_helper(maze,solution_matrix,n,row-1,col);
	rat_in_a_maze_helper(maze,solution_matrix,n,row+1,col);
	rat_in_a_maze_helper(maze,solution_matrix,n,row,col-1);
	rat_in_a_maze_helper(maze,solution_matrix,n,row,col+1);
	solution_matrix[row][col] = 0;
}

void ratInAMaze(int maze[][20], int n){
	int **solution_matrix = new int* [n];
	for(int i=0;i<n;i++){
		solution_matrix[i] = new int[n];
		for(int j=0;j<n;j++){
			solution_matrix[i][j] = 0;
		}
	}
	rat_in_a_maze_helper(maze,solution_matrix,n,0,0);
}


int main(){

	int n;
	cin >> n;

	int arr[n][20];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> arr[i][j];
		}
	}
	ratInAMaze(arr,n);
	return 0;
}