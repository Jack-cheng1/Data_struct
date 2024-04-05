#include "stdio.h"
#define Maxsize 10
typedef int ElemType;
typedef struct {
    ElemType data[Maxsize];
    int length;
}Sqlist;
void inputList(Sqlist &L)
{
    for(int i =1;i<L.length;i++)
    {
        scanf("%d",&L.data[i]);
    }
}
//此处第一个加引用是因为要对L进行修改，第二个引用是因为对del的值进行了改变
bool DeleteList(Sqlist &L,int i,ElemType &e)
{
    //判断删除的位置是否合法
    if(i<1 || i>L.length){
        return false;
    }
    e = L.data[i-1];//将删除的元素保存
    //对顺序表进行操作
    for(int j=i;j<L.length;j++)
    {
        L.data[j-1]=L.data[j];
    }
    L.length--;
    return true;
}
//插入函数
void printList(Sqlist L)
{
    for(int i=0;i<L.length;i++)
    {
        printf("%d ",L.data[i]);
    }
    printf("\n");
}
//按值查找位置函数
int LocateElem(Sqlist L,ElemType element)
{
    for(int i=0;i<L.length;i++)
    {
        if(element == L.data[i])
        {
            return i+1;
        }
    }
}
int main()
{
    Sqlist L;
    bool ret;
    scanf("%d",&L.length);
    L.data[0]=45;//初始化第一个值
    inputList(L);
    ElemType del=-1;
    ret = DeleteList(L,2,del);
    if(ret)
    {
        printf("delete Sqlist success!\n");
        printf("%d\n",del);
        printList(L);
    }else
    {
        printf("delete Sqlist failed!\n");
    }
    //按值查找
    int a;//用于接收查找位置的值
    a = LocateElem(L,45);
    printf("%d",a);//输出查找的结果
    return 0;
}