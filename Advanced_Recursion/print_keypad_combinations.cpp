#include<bits/stdc++.h>
using namespace std;

string mapping(int n){
	string *temp = new string[10];
	temp[0] = "";
	temp[1] = "";
	temp[2] = "abc";
	temp[3] = "def";
	temp[4] = "ghi";
	temp[5] = "jkl";
	temp[6] = "mno";
	temp[7] = "pqrs";
	temp[8] = "tuv";
	temp[9] = "wxyz";

	return temp[n];
}

void keypad(int num, string output){
	if(num==0){
		cout << output << endl;
		return;
	}
	int element = num%10;
	string element_string = mapping(element);
	int element_string_size = element_string.size();

	for(int i=0;i<element_string_size;i++){
		keypad(num/10,element_string[i] + output);
	}

}

void printKeypad(int num){
	string output = "";
	keypad(num,output);
}

int main(){
	int n;
	cin >> n;
	printKeypad(n);
}