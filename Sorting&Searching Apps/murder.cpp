#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll merge(ll arr[],int l, int mid, int h){
    int i = l, j = mid, k = 0;
    ll ans = 0;
    ll temp[h-l+1];
    while(i<mid && j<=h){
        if(arr[i]<arr[j]){
            ans += (h - j + 1)*arr[i];
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }
    while(i<mid){
        temp[k++] = arr[i++];
    }
    while(j<=h){
        temp[k++] = arr[j++];
    }
    for(int i=l,k=0;i<=h;i++,k++){
        arr[i] = temp[k];
    }
    return ans;
}

ll merge_sort(ll arr[],int low, int high){
    ll total_ans = 0;
    if(low<high){
        int mid = low + (high-low)/2;
        ll ans1 = merge_sort(arr,low,mid);
        ll ans2 = merge_sort(arr,mid+1,high);
        ll ans3 = merge(arr,low,mid+1,high);
        return ans1 + ans2 + ans3;
    }
    return total_ans;
}

int main() {

	// Write your code here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
    	ll result = merge_sort(arr,0,n-1);
        cout << result << endl;
    }
    return 0;
}