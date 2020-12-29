#include<bits/stdc++.h>
using namespace std;


void bin_search(long long* price,long long money,int n)
{
    if(money<price[0])
    {
        cout<<"0"<<" "<<money<<endl;
        return;
    }
    int s=0;
    int e=n-1;
    int ans=-1;

    while(s<=e)
    {
        int mid=(s+e)/2;
        if(money < price[mid])
        {
            e=mid-1;
        }
        else
        {
            ans=mid;
            s=mid+1;
        }
    }
   cout<<ans+1<<" "<<money-price[ans]<<endl;

}

int main()
{
    int n;
    cin>>n;
    long long* price = new long long[n];
    for(int i=0;i<n;i++)
    {
        cin>>price[i];
    }
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+price[i];
        price[i]=sum;
    }

    int days;
    cin>>days;
    while(days--)
    {
        long long money;
        cin>>money;
        bin_search(price,money,n);
    }
    return 0;
}