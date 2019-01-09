// Data_structure_1.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//这一节的内容是实现多项式的计算

#include "pch.h"
#include <iostream>
#include <math.h>
#include <time.h>
#define MAXN 10
double duration;
clock_t start, stop;


//直接的实现多项式计算
double f1(int n, double a[], double x)
{
	int i;
	double p = a[0];
	for (i = 1; i <= n; i++) {
		p += (a[i] * pow(x, i));
	}
	return p;
}

//不被鄙视的实现方法
double f2(int n, double a[], double x)
{
	double p = a[n];
	for (int i = n; i > 0; i--)
	{
		p = a[i - 1] + x * p;
	}
	return p;
}


int main()
{
	double a[MAXN];
	double res;
	int loop = 10000000;
	for (int i = 0; i < MAXN; i++) a[i] = (double)i;

	printf("===========BRGIN=================\n");
	start = clock();
	for (int i = 1; i <= loop; i++) {
		res = f1(MAXN, a, 1.1);
	}
	stop = clock();
	//printf("Function result is: %f\n", res);
	printf("Run Time is: %f\n", (double)(stop - start) / CLK_TCK);
	printf("===========FUNC1 OVER============\n");
	start = clock();
	for (int i = 1; i <= loop; i++) {
		res = f2(MAXN, a, 1.1);
	}
	stop = clock();
	//printf("Function result is: %f\n", res);
	printf("Run Time is: %f\n", (double)(stop - start) / CLK_TCK);
	printf("============END====================\n");
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
