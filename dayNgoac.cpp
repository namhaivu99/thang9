#include<bits/stdc++.h>
using namespace std;
void kt(string s)
{
    int a=s.find("()");
    int b=s.find("[]");
    int c=s.find("{}");
    while(a>=0||b>=0||c>=0)
    {
        if(a>=0)
            s.erase(a,2);
        else
        if(b>=0)
            s.erase(b,2);
        else
        if(c>=0)
            s.erase(c,2);
        a=s.find("()");
        b=s.find("[]");
        c=s.find("{}");
    }
    if (s == "")
        cout <<"yes"<<" "<<endl;
    else
        cout <<"no"<<" "<<endl;
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
        kt(s[i]);
    }

    return 0;
}
