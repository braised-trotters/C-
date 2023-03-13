#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<math.h>
using namespace std;

int maopao(int* arr, int sizeofarr);
int Pointer_call(void) {
	int a;
	cout << "请输入数组的大小" << endl;
	cin >> a;
	int* p = (int*)malloc((sizeof(int) * a));
	cout << "请输入" << a << "个数：" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "第" << i + 1 << "个数：";
		cin >> p[i];

	}
	cout << "数组长度为：" << a << endl;
	cout << "数组内容为：" << endl;
	for (int i = 0; i < a; i++)
	{

		cout << "p[" << i << "]=" << p[i] << endl;

	}
	cout << "冒泡排序后数组内容为：" << endl;
	maopao(p, a);
	cout << "p[" << a << "]=";
	for (int i = 0; i < a; i++)
	{
		cout << p[i];

	}
	system("pause");
	return 0;
}

