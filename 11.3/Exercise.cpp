#include "stdio.h"
#include "stdlib.h"
typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;
//头插法
void List_head_insert(LinkList &L)
{
    L=(LinkList)malloc(sizeof(LNode));
    L->next=NULL;
    ElemType x;
    scanf("%d",&x);
    LinkList s;
    while (x!=9999)
    {
        s=(LinkList)malloc(sizeof(LNode));
        s->data=x;
        s->next=L->next;
        L->next=s;
        scanf("%d",&x);
    }
}
//尾插法
void List_tail_insert(LinkList &L)
{
    L=(LinkList) malloc(sizeof(LNode));
    L->next=NULL;
    ElemType x;
    scanf("%d",&x);
    LinkList s,r=L;
    while(x!=9999)
    {
        s=(LinkList) malloc(sizeof(LNode));
        s->data=x;
        r->next=s;
        r=s;
        scanf("%d",&x);
    }
    r->next=NULL;
}
void print_List(LinkList L)
{
    L=L->next;
    while (L!=NULL)
    {
        printf("%3d",L->data);
        L=L->next;
    }
}
int main()
{
    LinkList L;
//    List_head_insert(L);
    List_tail_insert(L);
    print_List(L);
    return 0;
}
