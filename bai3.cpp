#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* preNode;
    Node* nextNode;
};
Node *Head=NULL;
Node *Tail=NULL;
void insert_(Node* &Head,Node* &Tail,int x)
{

    Node* p=new Node();
    p->data=x;
    p->nextNode=NULL;
    p->preNode=NULL;
    if(Head==NULL)
        {

            Head=p;
            Tail=p;
    }else{
          //  cout<<x<< " ";
             p->preNode=Tail;
             Tail->nextNode=p;
             Tail=p;
    }
}
int main()
{

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {

        int x;
        cin>>x;
        insert_(Head,Tail,x);
    }
    Node* a=Head;
    a=a->nextNode;
    int dem=0;
    while(a->nextNode!=NULL)
    {
       if(a->data+(a->nextNode)->data+(a->preNode)->data==0){dem++;}
       a=a->nextNode;
    }
    cout<<dem;
}
