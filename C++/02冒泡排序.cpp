#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int maopao(int* arr, int sizeofarr) {
	for (int i = 0; i < sizeofarr - 1; ++i) {
		for (int j = 0; j < sizeofarr - 1 - i; ++j)
		{
			int temp = 0;
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return 0;
}