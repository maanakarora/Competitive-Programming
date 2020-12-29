#include<bits/stdc++.h>
using namespace std;

int clear_all_bits_from_LSB(int n, int i){

	int a = (1<<(i+1));
	int b = a-1;
	int m = ~b;
	int res = n & m;
	return res;
}

int clearAllBits(int n, int i){
    
    int a = 1<<i;
    int m = a-1;
    int res = n & m;
    return res;
}

int main(){


}