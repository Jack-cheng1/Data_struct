#include "stdio.h"
#include "stdlib.h"
typedef  int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode* next;//指向下一个结点
}LNode,*LinkList;
//头插法新建链表
void list_head_insert(LinkList &L)
{
    L=(LinkList)malloc(sizeof(LNode));//带头节点的链表
    ElemType x;//要插入的元素
    scanf("%d",&x);
    LNode *s;//用来指向申请的新节点
    L->next=NULL;
    while(x!=9999)
    {
        s=(LinkList)malloc(sizeof(LNode));//带头节点的链表
        s->data=x;
        s->next=L->next;
        L->next=s;
        scanf("%d",&x);
    }
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
int main() {
    LinkList L;
    list_head_insert(L);
    print_List(L);
    return 0;
}
