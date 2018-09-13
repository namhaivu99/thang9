#include<bits/stdc++.h>
using namespace std;
void kt_(string s)
{
     int n=s.length();

    for(int i=0;i<n;i++)
    {
        int x=s[i];
        if(s[i]==41||s[i]==93||s[i]==125)
        {
            if(s[i]==41)
            {
                int e=i-1;
                int k=0;
                while(s[e]==' ')
                {
                    k++;
                    e=e-1;
                }
                for(int j=i-1-k;j<i;j++)
                {
                    int y=s[j];
                    if(y==40){s[j]=' ';s[i]=' ';}
                }
            }
            if(s[i]==93)
            {
                 int e=i-1;
                int k=0;
                while(s[e]==' ')
                {
                    k++;
                    e=e-1;
                }
                for(int j=i-1-k;j<i;j++)
                {
                    int y=s[j];
                    if(y==91){s[j]=' ';s[i]=' ';}
                }
            }
            if(s[i]==125)
            {
                 int e=i-1;
                int k=0;
                while(s[e]==' ')
                {
                    k++;
                    e=e-1;
                }
                for(int j=i-1-k;j<i;j++)
                {
                    int y=s[j];
                    if(y==123){s[j]=' ';s[i]=' ';}
                }
            }
        }
    }
    bool kt=true;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=' '){kt=false;}
    }
    if(kt==true)
    {
        cout<<"yes"<<endl;
    }else
    {
        cout<<"no"<<endl;
    }

}
int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {

        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        kt_(s[i]);
    }

}
