#include "stdio.h"
#include "stdlib.h"
typedef int ElemType;
//定义结点
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;
//头插法
void List_head_insert(LinkList &L)
{
    L=(LinkList)malloc(sizeof(LNode));//初始化链表
    L->next=NULL;
    ElemType x;//待插入元素
    scanf("%d",&x);
    LinkList s;//结点指针
    while (x!=9999)
    {
        s=(LinkList)malloc(sizeof(LNode));//申请结点空间
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
    LinkList s,r=L;//s,结点指针；r,指向尾部的指针；
    while(x!=9999)
    {
        s=(LinkList) malloc(sizeof(LNode));
        s->data=x;
        r->next=s;//尾指针指向最后一个结点
        r=s;//移动尾部指针
        scanf("%d",&x);
    }
    r->next=NULL;//最后一个元素指向空
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
