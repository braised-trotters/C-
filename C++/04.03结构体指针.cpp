#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

struct student
{
	string name;
	int age;
	double score;

};
int C(void) {
	student arr = {
		"уехЩ",18,69.2,
	};
	student* P = &arr;
	cout << P->name << endl;
	cout << P->age << endl;
	cout << P->score << endl;
	system("pause");
	return 0;
}
