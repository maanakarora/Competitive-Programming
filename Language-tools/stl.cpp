#include<bits/stdc++.h>
using namespace std;

int main(){
	/* VECTORS
	vector<int> v(5);
	vector<int>::iterator it;
	for(int i=0; i<v.size();i++){
		v[i] = i+1;
	}
	for(it = v.begin(); it!=v.end();it++){
		cout << *it << endl;
	} */

	//STRINGS
	/*string s = "Maanak";
	string s1(s); // to copy string from s to s1;
	cout << s << endl;
	cout << s1 << endl;
	string s2(s,2,4); // will copy from index 2 to length 4 ahead of it from s to s2;
	cout << s2 << endl;

	string s3 = s.substr(2,4); //substring start from 1 till length 4
	cout << s3 << endl;

	if(s2.compare(s3) == 0){
		cout << s2 << " is equal to " << s3 << endl;
	}
	else{
		cout << s2 << " is not equal to " << s3 << endl;
	}*/
	
	// PAIR CLASS

	/*pair<int,char> p;
	p = make_pair(2,'b');

	pair<int,char> p2(1,'a');
	cout << p2.first << " " << p2.second << endl;
	cout << p.first << " " << p.second << endl;
*/
	// SET CLASS implemented using BST in the backend
	/*set<int> s;
	int arr[] = {1,2,3,4,5,6,5};
	for(int i=0;i<7;i++){
		s.insert(arr[i]);
	}
	set <int>::iterator it;
	for(it=s.begin(); it!=s.end() ;it++){
		cout << *it << endl;
	}
	/*if(s.find(6) == s.end()){
		cout << "Element not found" << endl;
	}
	else{
		cout << "Element found" << endl;
	}*/
	/*if(s.find(9) == s.end()){
		cout << "Element not found" << endl;
	}
	else{
		cout << "Element found" << endl;
	}*/

	// MAP
	int arr[] = {1,2,3,4,5,6,5};
	map<int,int> m;

	for(int i=0;i<7;i++){
		m[arr[i]]++;
	}

	map<int,int>::iterator it;
	for(it=m.begin(); it!=m.end(); it++){
		cout << "Key is: " << it->first << " Value is " << it->second << endl; 
	}








	return 0;
}