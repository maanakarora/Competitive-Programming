#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    vector<int> dep(n);
    for(int i=0;i<n;i++){
        cin >> dep[i];
    }
    vector<pair<int,int> > arr_dep;
    for(int i=0;i<n;i++){
        pair<int,int> p;
        p = make_pair(arr[i],dep[i]);
        arr_dep.push_back(p);
    }
    sort(arr_dep.begin(),arr_dep.end());
    int curr_ans = 1;
    int global_ans = 1;
    for(int i=1;i<n;i++){
        if(arr_dep[i-1].second > arr_dep[i].first){
            curr_ans++;
        }
        else{
            for(int j=i-1;j>=0;j--){
                if(arr_dep[i].first >= arr_dep[j].second){
                    curr_ans--;
                }
            }
        }
        if(curr_ans > global_ans){
            global_ans = curr_ans;
        }
    }
    
    cout << global_ans; 
    
}