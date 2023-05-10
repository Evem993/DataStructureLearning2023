//
// Created by 84985 on 5/10/2023.
//

#ifndef TEST_UTILITIES_H
#define TEST_UTILITIES_H
#define ElementType int
#define InitialLinklistmark 9999
typedef struct Lnode{
    ElementType data;
    Lnode *next;
}Lnode,*LinkList;
/***
 * 采用头插法建立单链表
 * @param 单链表Linklist L
 * @return bool
 */
bool InitialLinklistF(LinkList &L);
bool InitialLnode(LinkList &L,ElementType);
void printLinklist(LinkList &L);
/***
 * 尾插法,在p的后面插入s
 * @param 单链表ListNode p
 * @param 单链表ListNode s
 * @return bool
 */
bool InsertNextLNode(Lnode *p,Lnode *s);

#endif //TEST_UTILITIES_H
