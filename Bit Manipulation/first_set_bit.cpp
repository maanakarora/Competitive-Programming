#include<bits/stdc++.h>
using namespace std;

int returnFirstSetBit(int n){

	for(int i=0;i<32;i++){
		if(((1<<i) & n) != 0){
			return (1<<i);
		}
	}
}

int main(){

	int n;
	cin >> n;
	cout << returnFirstSetBit(n) << endl;
}