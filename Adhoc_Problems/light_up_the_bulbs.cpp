#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n, x, y;
	cin >> n >> x >> y;
	string str;
	cin >> str;
	ll groups_of_zero = 0;
	if(str[0] == '0'){
		groups_of_zero++;
	}
	for(int i=0;i<n-1;i++){
		if(str[i] == '1' && str[i+1] == '0'){
			groups_of_zero++;
		}
	}
    if(groups_of_zero == 0){
        cout << "0" << endl;
        return 0;
    }
	ll min_cost = min(x,y)*(groups_of_zero-1) + y;
	cout << min_cost << endl;
    return 0;
}