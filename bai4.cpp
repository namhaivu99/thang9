#include<bits/stdc++.h>
using namespace std;
struct Node{
   int data;
   Node* next;
};
Node *Head=NULL;
Node *Tail=NULL;
void enqueue(Node* &Head,Node* &Tail,int x)
{
    Node *p=new Node();
    p->data=x;
    p->next=NULL;
    if(Head==NULL)
    {
        Head=p;
        Tail=p;

    }else{
    Tail->next=p;
    Tail=p;
    }
}
void dequeue(Node* &Head,Node* &Tail)
{
    Head=Head->next;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s=="enqueue")
        {
            int x;
        cin>>x;
        enqueue(Head,Tail,x);
        }else{dequeue(Head,Tail);}


    }
    Node *a=Head;
    while(a!=NULL)
    {
        cout<<a->data<<" ";
        a=a->next;
    }
}
