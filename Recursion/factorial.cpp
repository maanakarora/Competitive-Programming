#include<bits/stdc++.h>
using namespace std;

int fib(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	int small_output1 = fib(n-1);
	int small_output2 = fib(n-2);
	return small_output1 + small_output2;
}

int main(){

	cout << fib(3) << endl;



	return 0;
}