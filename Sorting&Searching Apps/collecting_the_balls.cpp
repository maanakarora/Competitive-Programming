
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll n, ll k){
    ll sharma = 0;
    ll curr = n;
    while(curr > 0){
        sharma = sharma + min(k,curr);
        curr = curr - k;
        curr = curr - curr/10;
    }
    if(2*sharma >= n){
        return true;
    }
    return false;
}

ll minimum_K(ll n){
    ll low = 1;
    ll high = n;
    ll min_val = -1;
    while(low <= high){
        ll mid = low + (high-low)/2;
        if(check(n,mid)){
        	high = mid-1;
            min_val = mid;
    	}
    	else{
        	low = mid+1;
    	}
    }
    return min_val;
}

int main()
{
    ll n;
    cin >> n;
    cout << minimum_K(n) << endl;
	return 0;
}
