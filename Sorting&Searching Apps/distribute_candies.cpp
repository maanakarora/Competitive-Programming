// similar approach as Aggressive Cows
// Whenever you have a distribution problem within a range, always think in terms of Binary Search
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPossible(ll arr[],ll n, ll k, ll curr){
    ll count_persons = 0;
    for(ll i = 0;i<n;i++){
        count_persons += arr[i]/curr;
    }
    if(count_persons>=curr){
        return true;
    }
    return false;
}

int main() {
	// solution is similar to aggressive cows
	// Write your code here
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        ll arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    ll max_element = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > max_element){
            max_element = arr[i];
        }
    }
    
    ll start = 0, end = max_element;
    ll ans = 0;
    while(start<=end){
        ll mid = start + (end-start)/2;
        if(isPossible(arr,n,k,mid)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    cout << ans << endl;
    }
    return 0;
    
    
}