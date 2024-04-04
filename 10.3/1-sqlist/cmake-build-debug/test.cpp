//#include <stdio.h>
//#define Maxsize 50
//typedef int ElemType;
//typedef struct{
//    ElemType data [Maxsize];
//    int length;
//}SqList;
//void import(SqList &L)
//{
//    for(int i=0;i<L.length;i++)
//    {
//        scanf("%d",&L.data[i]);
//    }
//}
//bool ListInster(SqList &L,int i,ElemType element)
//{
//    //判断插入的位置是否合法
//    if(i<1 || i>L.length+1)
//    {
//        return false;
//    }
//    if(L.length == Maxsize)
//    {
//        return false;
//    }
//    //满足以上条件进行插入操作
//    for(int j=L.length;j>=i;j--)//j>=i将i到j之间的元素进行后移
//    {
//        L.data[j]=L.data[j-1];
//    }
//    L.data[i-1]=element;
//    L.length++;
//    return true;
//}
//void printlist(SqList L)
//{
//    for(int j=0;j<L.length;j++)
//    {
//        printf("%d ",L.data[j]);
//    }
//}
//int main()
//{
//    SqList L;//定义一个SqList类型的顺序表
//    bool ret;
//    scanf("%d",&L.length);//输入当前顺序表的长度
//    import(L);//输入当前元素
//    ret = ListInster(L,3,24);//插入函数
//    if(ret)
//    {
//        printf("insert sqlist success!\n");
//        printlist(L);
//    }else{
//        printf("insert sqlist failed!\n");
//    }
//    return 0;
//}