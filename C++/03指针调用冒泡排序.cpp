#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<math.h>
using namespace std;

int maopao(int* arr, int sizeofarr);
int Pointer_call(void) {
	int a;
	cout << "����������Ĵ�С" << endl;
	cin >> a;
	int* p = (int*)malloc((sizeof(int) * a));
	cout << "������" << a << "������" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "��" << i + 1 << "������";
		cin >> p[i];

	}
	cout << "���鳤��Ϊ��" << a << endl;
	cout << "��������Ϊ��" << endl;
	for (int i = 0; i < a; i++)
	{

		cout << "p[" << i << "]=" << p[i] << endl;

	}
	cout << "ð���������������Ϊ��" << endl;
	maopao(p, a);
	cout << "p[" << a << "]=";
	for (int i = 0; i < a; i++)
	{
		cout << p[i];

	}
	system("pause");
	return 0;
}

