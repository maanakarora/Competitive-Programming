#include<bits/stdc++.h>
using namespace std;

int min_cost(int n, string a, string b){
	int cost = 0;
	int i = 0;
	while(i < n){
		if(a[i] != b[i]){
			// swap
			if(((a[i] != a[i+1]) && (a[i+1] != b[i+1])) && (i+1 < n)){
				cost++;
				i+=2;
			}
			// flip
			else{
				cost++;
				i++;
			}
		}
		else{
			i++;
		}
	}
	return cost;
}

int main(){

	int n;
	cin >> n;
	string a,b;
	cin >> a >> b;
	cout << min_cost(n, a, b) << endl;
}