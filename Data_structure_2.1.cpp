//线性表的顺序存储
#include <cstdio>

//链表初始化(建立空的顺序表)
List MakeEmpty()
{
    List PtrL;
    PtrL = (List)malloc(sizeof(struct LNode));
    PtrL -> Last = -1;
    return PtrL;
}

//查找
int Find(ElementType X, List PtrL)
{
    int i = 0;
    while (i <= PtrL->Last && PtrL->Data[i] != X)
        i++;
    if (i > PtrL->Last) return -1; /*如果没有找到，返回-1*/
    else return i; /*找到后返回储存位置*/
}

//插入
void Insert(ElementType X, int i, List PtrL)
{
    int j;
    if (Last->List == MAXSIZE-1) {
        printf("表满\n");
        return;
    }
    if (i<1 || i> PtrL->Last) {
        printf("位置不合法\n");
        return;
    }
    for (j=PtrL->Last; j>=i-1; j--)
        PtrL->Data[j+1] = PtrL->Data[j];
    PtrL->Data[i-1] = X;
    PtrL -> Last++;
}

//删除
void Delete(int i, List PtrL)
{
    int j;
    if (i<1 || i>Ptrl->Last+1){
        printf("不存在第%d个元素", i)
        return;
    }
    for (j=i; j<=PtrL->Last; j++)
    {
        PtrL->Data[j-1] = PtrL->Data[j];
    }
    PtrL->Last--;
    return;
}
