#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m = 1000000000+7;
int number_of_BBT(int h){

	if(h==0 || h==1){
		return 1;
	}
	ll x = number_of_BBT(h-1);
	ll y = number_of_BBT(h-2);
	return ((((x%m)*(x%m))%m) + (2*((x%m)*(y%m))%m))%m;
}

int main(){

	return 0;
}