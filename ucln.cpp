#include<bits/stdc++.h>
using namespace std;
int UCLN(int a,int b)
{
    if(a%b==0)
    {
        return b;
    }
    if(b%a==0)
    {
        return a;
    }
    if(a==1||b==1)
    {
        return 1;
    }
    if(a>b){UCLN(a-b,b);}else
        {
            UCLN(b-a,a);
        }
}
int main()
{
    int x,y;
    cin>>x>>y;
    int ucln=UCLN(x,y);
    cout<<ucln;
}
