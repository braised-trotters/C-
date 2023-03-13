#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
struct stu
{ 
	string name;
	int age;
	double score;
};
struct teacher
{
	string name;
	int ID;
	int age;
	stu s1;
};

int D(void) {
	teacher t1;
	t1.name = "历史";
	t1.age = 69;
	t1.ID = 12342;
	t1.s1.name = "张三";
	t1.s1.age = 17;
	t1.s1.score = 99;
	cout << t1.name << endl;
	cout << t1.age << endl;
	cout << t1.ID << endl;
	cout << t1.s1.name << endl;
	cout << t1.s1.age << endl;
	cout << t1.s1.score << endl;
	system("pause");
	return 0;
}