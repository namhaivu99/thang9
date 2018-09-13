#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max_=arr[0];
    int min_=arr[0];
    for(int i=1;i<n;i++)
    {
        if(max_<arr[i]){max_=arr[i];}
        if(min_>arr[i]){min_=arr[i];}
    }
    int sum=max_+min_;
    cout<<sum;
}
