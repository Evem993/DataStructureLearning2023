#include <iostream>
#include "utilities.h"
#include"exercise.h"
using namespace std;
bool reverse(LinkList &L){
    Lnode *p=L->next;
    if(p==NULL)
        return true;
    Lnode *q=p->next;
    while(q!=NULL){
        p->next=q->next;
        q->next=L->next;
        L->next=q;
        q=p->next;
    }
    return true;
}


//
// Created by 84985 on 5/10/2023.
//

