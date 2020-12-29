#include<bits/stdc++.h>
using namespace std;

struct Interval
{	
	int st;
	int et;
	
};
bool compare(Interval i1, Interval i2){
	return i1.st < i2.st;
}
int main(){
	//Sorting
	/*Interval arr[] = {{6,4}, {3,4}, {4,6}, {8,13}};
	sort(arr,arr+4,compare);
	for(int i=0;i<4;i++){
		cout << arr[i].st << " : " << arr[i].et << endl;
	}*/

	// Binary Search
	int arr[] = {1,3,2,3,7,6};
	sort(arr,arr+6);
	for(int i=0;i<6;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << binary_search(arr,arr+6,3);
	cout << endl;
	// lower_bound gives pointer to the index where "7" is placed, so to get the index we subtract "arr" from it
	cout << lower_bound(arr,arr+6,7) - arr;
	cout << endl;
	cout << upper_bound(arr,arr+6,3) - arr;
	cout << endl;
	//cout << __gcd(10,6) << endl;

	cout << pow(2,5) << endl;

	int x = 10;
	int y = 12;
	swap(x,y);
	cout << x << endl;
	cout << y << endl;

	cout << max(14,18) << endl;
	

 	return 0;


}