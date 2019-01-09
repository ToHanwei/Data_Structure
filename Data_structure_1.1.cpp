// Data_structure_1.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <time.h>

using namespace std;

void PrintN1(int N) {
	if (N) {
		PrintN1(N - 1);
		printf("%d\n", N);
	}
	return;
}

void PrintN2(int N) {
	for (int i = 1; i <= N; i++) {
		printf("%d\n", i);
	}
	return;
}

int main()
{
	int N = 10000;
	clock_t start_t1, start_t2, end_t1, end_t2;
    std::cout << "Hello World!\n"; 
	std::cout << "This is a Test!\n";
	
	/*start_t1 = clock();
	PrintN1(N);
	end_t1 = clock();
	cout << "Runing time PrintN1: "  <<(double)(end_t1 - start_t1) / CLOCKS_PER_SEC << "s"  << endl;*/

	start_t2 = clock();
	PrintN2(N);
	end_t2 = clock();
	cout << "Runing time PrintN2: "  << (double)(end_t2 - start_t2) / CLOCKS_PER_SEC << "s" << endl;


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
