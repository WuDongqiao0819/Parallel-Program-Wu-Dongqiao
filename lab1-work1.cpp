#include<iostream>
using namespace std;
int main() {
	int n = 1000;//�����ģ������ָ��
	//��ʼ��
	int** arr;
	arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = i + j;
		}
	}
	int* test;
	test = new int[n];
	for (int i = 0; i < n; i++) {
		test[i] = i;
	}
	int* sum;
	sum = new int[n];
	//���㣬���з���
	int count = 10;//ѭ������
	while (count > 0) {
		for (int i = 0; i < n; i++) {
			sum[i] = 0;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				sum[i] += test[j] * arr[j][i];
			}
		}
		count--;
	}
	return 0;
}