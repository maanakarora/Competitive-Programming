#include<bits/stdc++.h>
using namespace std;
	
int getAllIndexes(int a[],int size,int x, int output[]){

	if(size==0){
		return 0;
	}

	int smallerGetAllIndexes = getAllIndexes(a+1,size-1,x,output);

	for(int i=0; i<smallerGetAllIndexes; i++){
		output[i]++;
	}

	if(a[0]==x){

		for(int i=smallerGetAllIndexes; i>=0; i--){

			output[i] = output[i+1];

		}
		output[0] = 0;

		return smallerGetAllIndexes + 1;

	}

	else{
		return smallerGetAllIndexes;
	}


}

int main(){
	int arr[] = {8,9,8,9,9,8};
	int *output = new int[6];
	int ans = getAllIndexes(arr,6,8,output);
	cout << ans << endl;
	return 0;
}