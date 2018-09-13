#include<bits/stdc++.h>
using namespace std;
struct Node{
  int data;
  Node* next;
  Node* pre;
};
Node *Head=NULL;
Node *Tail=NULL;
void push(Node* &Head,Node* &Tail,int x)
{
    Node* p=new Node();
    p->data=x;
    p->next=NULL;
    p->pre=NULL;
    if(Head==NULL){Head=p;Tail=p;}else{
        Tail->next=p;
        p->pre=Tail;

        Tail=p;
    }
}
void pop(Node*&Head,Node*&Tail)
{
    Tail=Tail->pre;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s=="push")
        {
            int x;
            cin>>x;
            push(Head,Tail,x);
        }else{
            pop(Head,Tail);
        }
    }
    Node* a=Head;
    while(a!=NULL)
    {
        cout<<a->data<<" ";
        a=a->next;
    }
}
