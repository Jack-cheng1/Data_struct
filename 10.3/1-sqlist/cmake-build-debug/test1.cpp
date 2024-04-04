//#include "stdio.h"
//#define Maxsize 50
//typedef int ElemType;
//typedef struct{
//    ElemType data[Maxsize];
//    int length;
//}Sqlist;
//
//void importlist(Sqlist &L)
//{
//    for(int i=0;i<L.length;i++)
//    {
//        scanf("%d",&L.data[i]);
//    }
//}
//
//bool ListInsert(Sqlist &L,int i,ElemType element)
//{
//    //判断插入是否合法
////    if(i<1 || i>L.length+1)
////    {
////        return false;
////    }
//
////    if(L.length == Maxsize)
////    {
////        return false;
////    }
////    for(int j=L.length;j>=i;j--)
////    {
////        L.data[j] = L.data[j-1];
////    }
////    L.data[i-1]=element;
////    L.length++;
//
//    //判断删除是否合法
//    if(i<1 || i>L.length) {
//        return false;
//    }
//
//    return true;
//}
//void input(Sqlist L)
//{
//    for(int i=0;i<L.length;i++)
//    {
//        printf("%3d",L.data[i]);
//    }
//}
//int main()
//{
//    Sqlist L;
//    bool ret;
//    scanf("%d",&L.length);
//    importlist(L);
//    ret = ListInsert(L,3,24);
//    if(ret)
//    {
//        printf("Insert Sqlist success!\n");
//        input(L);
//    } else
//    {
//        printf("Insert Sqlist failed!\n");
//    }
//
//    return 0;
//}