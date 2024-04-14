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
    LinkList s;//结点指针，等价于=LNode *s;
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
//按位查找
LinkList GetElem(LinkList L,int SearchPos)
{
    int i =0;
    if(SearchPos<0)//如果查找的位置为复数返回null
    {
        return NULL;
    }
    while (L!=NULL&&i<SearchPos){
        L=L->next;
        i++;
    }
    return L;//返回当前L所指的位置
}
//按值查找
LinkList LocateElem(LinkList L,ElemType element)
{
    while (L->next!=NULL)
    {

        if(L->data == element)
        {
            return L;
        }
        L=L->next;
    }
    return NULL;
}
void print_List(LinkList L)
{
    L=L->next;
    while (L!=NULL)
    {
        printf("%3d ",L->data);
        L=L->next;
    }
    printf("\n");
}
int main()
{
    LinkList L;
//    List_head_insert(L);//头插法
    LinkList search1,search2;//接收查找返回的指针
    List_tail_insert(L);//尾插法
//    search1=GetElem(L,5);//按位查找
    search2 = LocateElem(L,24);//按值查找
    print_List(L);//打印插入后的链表
//    if(search1 !=NULL)
//    {
//        printf("Succeeded in searching by serial number\n");
//        printf("%d\n",search1->data);
//    }
    if(search2 !=NULL)
    {
        printf("Search by value succeeded\n");
        printf("%d",search2->data);
    }

    return 0;
}
