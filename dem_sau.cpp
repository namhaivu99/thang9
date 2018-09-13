#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int d=s.length();
    for(int i=0;i<d;i++)
    {
        if(s[i]==' '&&s[i+1]==' ')
        {
            s[i]='*';
        }
    }
    int dem=1;
    for(int i=0;i<d;i++)
    {
        if(s[i]==' '){dem++;}
    }
    cout<<dem;
}
