#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

struct student
{
	string name;
	int age;
	double score;

};

int B(void) {
	student arr[3] = {
		{"����",18,69.2},
		{"����",17,78.2},
		{"������",19,98}
	};
	for (int i = 0; i < 3; ++i) {

		cout << arr[i].name << endl;
	}
	return 0;
}
