#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int si,int ei){
    int pivot = a[si];
    int count_smaller_elements = 0;
    for(int i=si+1;i<=ei;i++){
        if(a[i]<=pivot){
            count_smaller_elements++;
        }
    }
    int temp;
    temp = a[si];
    a[si] = a[si+count_smaller_elements];
    a[si+count_smaller_elements] = temp;
    int c = si+count_smaller_elements;
    int i=si, j=ei;
    while(i!=c && j!=c){
        if(a[i]<=a[c]){
            i++;
        }
        if(a[j]>a[c]){
            j--;
        }
        else{
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
    return c;
}

void quick_sort(int a[],int si,int ei){
    if(si>=ei){
        return;
    }
    int c = partition(a,si,ei);
    quick_sort(a,si,c-1);
    quick_sort(a,c+1,ei);
}

void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
   
    quick_sort(input,0,size-1);
}

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    quickSort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

}

