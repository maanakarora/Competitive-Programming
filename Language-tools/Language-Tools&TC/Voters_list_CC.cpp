#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	int size = n1+n2+n3;
	vector<int> combinedList(size);
	for(int i=0;i<size;i++){
		cin >> combinedList[i]; 
	}

	sort(combinedList.begin(), combinedList.end());
	vector<int> ans;
	int i=0;
	int j; 
	while(i<size && j<size){
		j = i+1;
		int count = 1;
		while(combinedList[i]==combinedList[j]){
			count++;
			j++;
		}
		if(count >= 2){
			ans.push_back(combinedList[i]);
		}
		i = j;
	}
	cout << ans.size() << endl;
	for(int i=0;i<ans.size();i++){
		cout << ans[i] << endl;
	}

	return 0;
}