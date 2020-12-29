#include<bits/stdc++.h>
using namespace std;
bool sortbysec(pair<string,int> a, pair<string,int> b) 
{ 
    return (a.second > b.second); 
} 
int main()
{
    int n;
    cin >> n;
    vector<pair<string,int> > students;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        int m1,m2,m3;
        cin >> m1 >> m2 >> m3;
        int marks = (m1+m2+m3)/3;
        students.push_back(make_pair(s,marks));
    }
    
    unordered_map<int,int> um;
    
    for(int i=0;i<students.size();i++){
        um[students[i].first] = i+1;
    }
    
    sort(students.begin(),students.end(), sortbysec);
    
    
    
    for(int i=0;i<students.size();i++){
        cout << i+1 << " " << students[i].first << endl;
    }
    return 0;
}

