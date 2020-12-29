#include<bits/stdc++.h>
using namespace std;
string mapping(int n){
string *mapping = new string[10];
mapping[0] = "";
mapping[1] = "";
mapping[2] = "abc";
mapping[3] = "def";
mapping[4] = "ghi";
mapping[5] = "jkl";
mapping[6] = "mno";
mapping[7] = "pqrs";
mapping[8] = "tuv";
mapping[9] = "wxyz";

return mapping[n];
}

int keypad(int num, string output[]){
	if(num==0){
		output[0] = "";
		return 1;
	}
	int element = num%10;
	int smallerOutputSize = keypad(num/10,output);
	string element_string = mapping(element);
	int element_string_size = element_string.size();
	for(int i=0;i<element_string_size;i++){
		for(int j=0;j<smallerOutputSize;j++){
			output[j+smallerOutputSize*i] = output[j];
		}
	}
	for(int i=0;i<element_string_size;i++){
		for(int j=0;j<smallerOutputSize;j++){
			output[j+smallerOutputSize*i] += element_string[i];
		}
	}
	return smallerOutputSize * element_string_size;
}

int main(){

	int n;
	cin >> n;
	string *output = new string[1000];
	int count = keypad(n,output);
	for(int i=0;i<count;i++){
		cout << output[i] << endl;
	}
	
}