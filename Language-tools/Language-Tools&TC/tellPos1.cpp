#include<bits/stdc++.h>
using namespace std;




struct student{
    string name;
    int marks;
    int rollNo;
};

bool arranger(student s1, student s2)
{
    if(s1.marks>s2.marks)
    {
        return 1;
    }
    else if(s2.marks>s1.marks)
    {
        return 0;
    }
    else if(s2.marks==s1.marks)
    {
        if(s1.rollNo<s2.rollNo)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    
    vector<student> v;
    int count = 1;


    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        int m1,m2,m3;
        cin >> m1 >> m2 >> m3;
        int avg = (m1+m2+m3);
        student s1;
        s1.name = s;
        s1.marks = avg;
        s1.rollNo = count;
        count++;
        v.push_back(s1);
    }
    sort(v.begin(), v.end(), arranger);
    int rank = 1;
    for(int i=0;i<v.size();i++){
        cout << rank << " " <<  v[i].name << endl;
        rank++;
    }
    
    
    
    return 0;
}

