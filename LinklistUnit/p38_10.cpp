//
// Created by 84985 on 5/10/2023.
//
#include <iostream>
#include "utilities.h"
#include"exercise.h"
using namespace std;

bool separate(LinkList &L){
    int i=1;
    Lnode *p=L->next,*temp;
    LinkList A,B;
    A=(LinkList) malloc(sizeof(LinkList));
    A->next=NULL;
    B=(LinkList) malloc(sizeof (LinkList));
    B->next=NULL;
    Lnode *ra=A,*rb=B;
    while(p!=NULL){
        InitialLnode(temp,p->data);
        if(1==i%2){
            InsertNextLNode(ra,temp);
            ra=temp;
        }
        else if (0==i%2){
            InsertNextLNode(rb,temp);
            rb=temp;
        }
        i++;
        p=p->next;
    }
    cout<<"A:";
    printLinklist(A);
    cout<<endl<<"B:";
    printLinklist(B);
    cout<<endl;
    //    printLinklist(L);
    return true;
}
