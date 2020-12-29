#include<bits/stdc++.h>
using namespace std;
#include<unordered_map>
#include <vector>
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n){
    //Your Code goes here
    unordered_map<int,bool> um;
    for(int i=0;i<n;i++){
        um[arr[i]] = true;
    }
    
    unordered_map<int,int> indexes;
    for(int i=0;i<n;i++){
        if(indexes.find(arr[i])!=indexes.end()){
            indexes[arr[i]] = min(i,indexes[arr[i]]);
        }
        else indexes[arr[i]] = i;
    }
    int max_len = 1;
    int global_seq = arr[0];
    for(int i=0;i<n;i++){
        if(um[arr[i]]==true){
            int c_len = 1;
            int start_seq = arr[i];
            int f_consecutive = arr[i]+1;
            while(um.find(f_consecutive) != um.end()){
                c_len++;
                um[f_consecutive] = false;
                f_consecutive++;
            }
            int b_consecutive = arr[i]-1;
            while(um.find(b_consecutive) != um.end()){
                c_len++;
                um[b_consecutive] = false;
                start_seq = b_consecutive;
                b_consecutive--;
            }
            if(c_len > max_len){
                max_len = c_len;
                global_seq = start_seq;
            }
            else if(c_len == max_len){
                if(indexes[start_seq] < indexes[global_seq]){
                    global_seq = start_seq;
                }
            }
        }
    }
   vector<int> ans;
    for(int i=global_seq; i<(global_seq+max_len); i++){
        ans.push_back(i);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    vector<int> res = longestConsecutiveIncreasingSequence(arr,n);
    for(int i=0;i<res.size();i++){
        cout << res[i] << " ";
    }
    return 0;
}