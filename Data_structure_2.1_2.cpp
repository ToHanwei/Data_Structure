//链式表的链式存储实现

typedef struct LNode *List;
struct LNode{
    ElementType Data;
    List Next;
};

struct Lnode L;
List PtrL;

//求表长
int Length(List PtrL)
{
    List p = PtrL; /*p指向表的第一个节点*/
    int j=0;
    while (p) {
        p = p->Next;
        j++; /*当前p的第j个节点*/
    }
    return j;
}

//查找
////按序号查找
List FindKth(int K, List PtrL)
{
    List p = PtrL;
    int i;
    while (p != NULL && i<K){
        p=p->Next;
        i++;
    }
    if (i==K) return p;
    else return NULL;
}
////按值查找
List Findvalue(ElementType X, List PtrL)
{
    List p=PtrL;
    while(p!=NULL && p->Data != X)
        p=p->Next;
    return p;
}

//插入
List Insert(ElementType X, int i, List PtrL)
{
    List p, s;
    if (i==1) {
        s = (List)malloc(sizeof(struct LNode))
    }
}