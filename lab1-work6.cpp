#include<iostream>
#include<math.h>
using namespace std;
void recursion(int* arr, int n)
{
	if (n == 1) {
		return;
	}
	else
	{
		for (int i = 0; i < n / 2; i++) {
			arr[i] += arr[n - i - 1];
		}
		n = n / 2;
		recursion(arr, n);
	}
}

int main() {
	//��ʼ��
	int count = 100;//ѭ������
	int m = 20;
	int n = pow(2, m);//��ģ
	int* arr = new int[n];//���ۼӵ���
	for (int i = 0; i < n; i++) {
		arr[i] = i;
	}
	while (count > 0) {
		int sum = 0;//�ۼӽ��
		//�����ݹ�
		recursion(arr, n);
		sum = arr[0];
		count--;
	}
	return 0;