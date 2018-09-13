#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string a[100];
    int d=s.length();
    int i=0;
    int dem=0;
    while(i<d)
    {
        int j=0;
        while(i+j<d)
        {
            if(s[i+j]==' '){break;}else{j++;}
        }
        for(int k=i;k<i+j;k++)
        {
            a[dem]=a[dem]+s[k];
        }
        i=i+j+1;
        dem++;
    }
    for(int j=dem-1;j>=0;j--)
    {
        cout<<a[j]<<" ";
    }
}
