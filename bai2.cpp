#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* nextNode;
};
 Node *Head=NULL;
void insertFrist(Node* &Head,int x,int y)
{

    Node *p=new Node();
    p->nextNode=NULL;
    p->data=y;

    if(Head==NULL){Head=p;}
    else{
        if(x==0){
            p->nextNode=Head;
            Head=p;
        }else{
            int dem=1;
            Node* q=Head;
            while(dem<x)
            {
                dem++;
                q=q->nextNode;
            }
            p->nextNode=q->nextNode;
            q->nextNode=p;

        }
    }
}
void delete_(Node* &Head,int k)
{
    int dem=1;
    Node* q=Head;
    while(dem<k)
    {
        dem++;
        q=q->nextNode;
    }
    q->nextNode=(q->nextNode)->nextNode;

}
int main()
{

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
         if(s=="insert"){
            int x,y;
            cin>>x>>y;
            insertFrist(Head,x,y);}else{int k;cin>>k;delete_(Head,k);}

    }
    Node* a=Head;
    while (a!=NULL)
    {

        cout<<a->data<<" ";
        a=a->nextNode;
    }

}
