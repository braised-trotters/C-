#define _CRT_SECURE_NO_WARNINGS 1
//有三名老师，每名老师带5名学生。
//老师信息有姓名和学生数组；
//学生信息有姓名和分数
//创建老师数组并通过函数赋值打印
#include<iostream>
using namespace std;

struct student
{
	string name;
	double score;
};

struct teacher
{
	string name;
	student st[5];
};
string NAME1 = "abc";
void alloct(teacher* p) {
	for (int i = 0; i < 3; i++)
	{	
		p[i].name = "t";
		p[i].name += NAME1[i];

		for (int T = 0; T < 5; T++)
		{
			cout << "第" << i + 1 << "位老师" << endl;
			cout << "学生" << T + 1 << "信息" << endl;
	
			
			system("pause");
			cout << "学生" << T + 1 << "成绩:";
			cin >> p[i].st[T].score ;
			cout << "学生" << T + 1 << "姓名:";
			p[i].st[T].name = "st";
			p[i].st[T].name += NAME1[i];
			
		}
	}
	}
	
void printinf(teacher*p) {

	for (int x = 0; x < 3; x++)
	{
		cout << "第：" << x + 1 << "位老师的信息：" << endl;
		cout << "姓名：";
		cout << p[x].name<< endl;
		cout << "所带学生：" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "学生：" << i + 1 << "姓名";
			cin >> p[x].st[i].name;
			cout << "学生：" << i + 1 << "成绩";
			cin >> p[x].st[i].score;
		}

	}
	}

int main(void){
	teacher t[3];
	alloct(t);
	system("pause");
	return 0;
}