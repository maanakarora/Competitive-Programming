#include<bits/stdc++.h>
using namespace std;

bool distributedEqually(int n){
	if((n%11)==1) return true;
	return false;
}

int main(){

	freopen("taktakin.txt", "r", stdin);
	freopen("taktakout.txt","w",stdout);
	int fruits;
	cin >> fruits;
	int fullMoons = 0;
	while(!distributedEqually(fruits)){
		fullMoons++;
		fruits *= 2;
	}

	cout << fullMoons << " " << fruits << endl;

	return 0;
	
}