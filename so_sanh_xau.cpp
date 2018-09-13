#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x,y;
    cin>>x;
    cin>>y;
    int a=x.length();
    int b=y.length();




    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    if(a!=b){cout<<"NO";}else
        {
            bool kt=true;
            for(int i=0;i<a;i++)
            {
                if(x[i]!=y[i]){kt=false;}
            }
            if(kt){cout<<"YES";}else{cout<<"NO";}
        }
}
