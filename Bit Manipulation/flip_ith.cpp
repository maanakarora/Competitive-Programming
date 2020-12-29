#include<bits/stdc++.h>
using namespace std;

int flip(int n){

	return (n^(1<<i));
}

void checkEvenOdd(int n){

	if((n & 1) == 0){
		cout << "Even"<< endl;
	}
	else cout << "Odd" << endl;
}

bool powOf2(int n){

	if((n & (n-1)) == 0 && n > 0){
		return true;
	}
	else return false;
}


