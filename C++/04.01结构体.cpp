#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

struct student
{
	string name;
	int age;
	double score;

}a3;
int A(void)
{   //����1��
	student a;
	a.age = 18;
	a.name = "�";
	a.score = 81.3;

	cout << a.name << endl;
	cout << a.age << endl;
	cout << a.score << endl;
	system("pause");
	//����2��
	struct student a2 = { "����",19,68.1 };
	cout << a2.name << endl;
	cout << a2.age << endl;
	cout << a2.score << endl;
	system("pause");
	//����3��˳�㴴��������11��
	a3.age = 17;
	a3.name = "������";
	a3.score = 77.5;
	cout << a3.name << endl;
	cout << a3.age << endl;
	cout << a3.score << endl;
	system("pause");

	return 0;
}