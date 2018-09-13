#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    int d=s.length();
    if(k==d-1){s[k]=' ';}else
    {
        for(int i=k;i<d;i++){s[k]=s[k+1];}
    }
    cout<<s;
}

