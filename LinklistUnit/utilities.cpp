//
// Created by 84985 on 5/10/2023.
//
#include <iostream>
#include"utilities.h"
using namespace std;
bool InitialLinklistF(LinkList &L){
    L=(Lnode *)malloc(sizeof (Lnode));
    L->next=NULL;
    Lnode *s;
    ElementType x;
    cin>>x;
    while(x!=InitialLinklistmark){
        s=(Lnode *)malloc(sizeof(Lnode));
        s->data=x;
        s->next=L->next;
        L->next=s;
        cin>>x;
    }
    return true;
}
bool InitialLnode(Lnode *&p,ElementType data){
    p=(Lnode *) malloc(sizeof (Lnode));
    if(p==NULL)
        return false;
    p->data=data;
    p->next=NULL;
    return true;
}
void printLinklist(LinkList &L){
    Lnode *p=L->next;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
bool InsertNextLNode(Lnode *p,Lnode *s){
    if(p==NULL||s==NULL)
        return false;
    s->next=p->next;
    p->next=s;
    return true;
}
