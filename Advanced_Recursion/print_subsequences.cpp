#include<bits/stdc++.h>
using namespace std;

void print_subs(string input, string output){
	if(input.empty()){
		cout << output << endl;
		return;
	}
	print_subs(input.substr(1),output); // not including the first character in output
	print_subs(input.substr(1), output + input[0]); // including the first char in output

}

int main(){
	string s;
	cin >> s;
	string output = "";
	print_subs(s,output);
}

//uses much less space
