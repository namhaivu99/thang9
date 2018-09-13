#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;
     int n=s.length();
     int moc=0;
     int sum=0;
     int arr[100];
     int dem=0;
     char ar[100];
     for(int i=0;i<n;i++)
     {

         if(s[i]=='+'||s[i]=='-')
         {
             string a;
             for(int j=moc;j<i;j++)
             {
                 a=a+s[j];
             }
             // cout<<a<<endl;
             arr[dem]=atoi(a.c_str());
             moc=i+1;
             ar[dem]=s[i];
            // cout<<s[moc-1]<<" ";
            dem++;
         }

     }
    // cout<<"sum"<<  sum<<endl;
     string x;
     for(int i=moc;i<n;i++)
     {
         x=x+s[i];
     }
     sum=arr[0];
    // if(s[moc-1]=='+'){
    // sum=sum+atoi(x.c_str());}
    // if(s[moc-1]=='-'){
     arr[dem]=atoi(x.c_str());
     for(int i=0;i<dem;i++)
     {
        if(ar[i]=='+'){sum=sum+arr[i+1];}else{sum=sum-arr[i+1];}
     }
     cout<<sum;
}
