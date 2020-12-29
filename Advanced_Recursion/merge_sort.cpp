#include<bits/stdc++.h>
using namespace std;
void merge_two_sorted_arrays(int a[],int start,int mid,int end){
    int *temp = new int[end-start+1];
    int i=start,j=mid+1,k=0;
    while(i<=mid && j<=end){
        if(a[i]<=a[j]){
            temp[k]=a[i];
            i++;
        }
        else{
            temp[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        temp[k] = a[i];
        i++;
        k++;
    }
    while(j<=end){
        temp[k] = a[j];
        j++;
        k++;
    }
    for(int i=0;i<(end-start+1);i++){
        a[i+start] = temp[i];
    }
}

void merge_sort(int a[],int si, int ei){
    if(si>=ei){
        return;
    }
    int mid = (si+ei)/2;
    merge_sort(a,si,mid);
    merge_sort(a,mid+1,ei);
    merge_two_sorted_arrays(a,si,mid,ei);
}

void mergeSort(int input[], int size){
	// Write your code here
    merge_sort(input,0,size-1);
}

int main(){
	int n;
	cin >> n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	mergeSort(arr,n);
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}

}