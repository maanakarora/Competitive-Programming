#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("listin.txt","r",stdin);
	freopen("listout.txt","w",stdout);
	int n;
	cin >> n;
	int arr[1001];
	for(int i=0;i<1001;i++){
		arr[i] = 0;
	}
	for(int i=0;i<n;i++){
		int p1,p2;
		cin >> p1 >> p2;
		arr[p1]++;
		arr[p2]++;

	}
	int maxFriends = 0;
	for(int i=0;i<1001;i++){
		if(maxFriends<arr[i]){
			maxFriends = arr[i];
		}
	}
	for(int i=0;i<1001;i++){
		if(arr[i]==maxFriends){
			cout << i << endl;
		}
	}

	return 0;
}