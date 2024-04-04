#include <stdio.h>

#define Maxsize 50
typedef int ElemType;//Elem元素,Type类型;元素类型
typedef struct {
    ElemType data[Maxsize];
    int length;//顺序表当前长度
}SqList;
//顺序表的插入，因为L的值会改变，因此我们这里要引用，i是插入的位置
bool ListInster(SqList &L,int i,ElemType element)//element：元素
{
    //判断i是否合法
    if(i<1 || i>L.length+1)
    {
        return false;
    }
    if(L.length == Maxsize)
    {
        return false;
    }
    //进行插入操作
    for(int j=L.length;j>=i;j--)
    {
        L.data[j] = L.data[j-1];
    }
    L.data[i-1]=element;
    L.length++;
    return true;
}
void PrintList(SqList L)
{
    for(int i=0;i<L.length;i++)
    {
        printf("%3d ",L.data[i]);
    }
}
int main() {
    SqList L;//定义一个顺序表，变量L
//    L.length = 4;//定义当前顺序表长度
    scanf("%d",&L.length);
    bool ret;//用于接受ListInster的返回值
    for(int i=0;i<L.length;i++)
    {
        scanf("%d",&L.data[i]);
    }
    ret = ListInster(L,6,60);
    if(ret)
    {
        printf("insert sqlist success\n");
        PrintList(L);//打印顺序表
    }else{
        printf("insert sqlist failed\n");
    }
    printf("\n%d",L.length);
    return 0;
}


