#include<bits/stdc++.h>
using namespace std;

int main(){

	// you can also dynamically allocate strings
	string *sp = new string;
	*sp = "abc";
	cout << sp << endl; // will print the address of string since sp is a pointer
	cout << *sp << endl; // will de reference the pointer and print content of string

	// to input a line with spaces use getline() function since cin breaks input at space character
	string s1;
	getline(cin,s1);
	cout << s1 << endl;

	string s = "coding";
	string s2 = s + s1;
	cout << s2 << endl;

	s += s1;
	cout << s << endl;

	cout << s.size() << endl;
	cout << s.length() << endl; // same as size function

	s = "aefdefdef";

	cout << s.substr(3) << endl; 
	cout << s.substr(3,3) << endl; // 3rd index se 3 length tak;
	cout << s.find("def");


}