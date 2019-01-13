#include <cstdio>


int Maxvalue(int A , int B, int C) {
    int temp = A;
    if (B > temp) {
        temp = B;
    }
    if (C > temp) {
        temp = C;
    }
    return temp;
}


int DivideAndConquer(int List[], int left, int right) {
    int Max_left, Max_right;
    int Border_left, Border_right;
    int Max_border_left, Max_border_right;
    int center;
    if (right == left) {
        if (List[left]>0) return List[left];
        else return 0;
    }
    //递归求两边子列最大值
    center = (left + right) / 2;
    Max_left = DivideAndConquer(List, left, center);
    Max_right = DivideAndConquer(List, center+1, right);
    //扫面左边
    Max_border_left = 0;
    Border_left = 0;
    for (int i=center; center>=left; i--) {
        Border_left += List[i];
        if (Border_left > Max_border_left) {
            Max_border_left = Border_left;
        }
    }

    //扫描右边
    Max_border_right = 0;
    Border_right = 0;
    for (int i=center+1; i<=right; i++) {
        Border_right += List[i];
        if (Border_right > Max_border_right) {
            Max_border_right = Border_right;
        }
    }
    return Maxvalue(Max_left, Max_right, Max_border_left+Max_border_right);
}

int MaxSeqSum3(int List[], int N) {
    return DivideAndConquer(List, 0, N-1);
}


int main () {
    int m;
    int N = 10;
    int List[10];
    for (int i=0; i<=N; i++) {
        List[i] = i;
    }
    printf("TEST\n");
    m = MaxSeqSum3(List, N);
    printf("%d\n", m);
}