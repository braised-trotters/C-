#define _CRT_SECURE_NO_WARNINGS 1
//��������ʦ��ÿ����ʦ��5��ѧ����
//��ʦ��Ϣ��������ѧ�����飻
//ѧ����Ϣ�������ͷ���
//������ʦ���鲢ͨ��������ֵ��ӡ
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
			cout << "��" << i + 1 << "λ��ʦ" << endl;
			cout << "ѧ��" << T + 1 << "��Ϣ" << endl;
	
			
			system("pause");
			cout << "ѧ��" << T + 1 << "�ɼ�:";
			cin >> p[i].st[T].score ;
			cout << "ѧ��" << T + 1 << "����:";
			p[i].st[T].name = "st";
			p[i].st[T].name += NAME1[i];
			
		}
	}
	}
	
void printinf(teacher*p) {

	for (int x = 0; x < 3; x++)
	{
		cout << "�ڣ�" << x + 1 << "λ��ʦ����Ϣ��" << endl;
		cout << "������";
		cout << p[x].name<< endl;
		cout << "����ѧ����" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "ѧ����" << i + 1 << "����";
			cin >> p[x].st[i].name;
			cout << "ѧ����" << i + 1 << "�ɼ�";
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