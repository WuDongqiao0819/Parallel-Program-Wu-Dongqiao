#include<iostream>
#include<math.h>
using namespace std;
int main() {
	//��ʼ��
	int count = 100;//ѭ������
	int m = 10;
	int n = pow(2, m);//��ģ
	int* arr = new int[n];//���ۼ���
	while (count > 0) {
		int sum = 0;//�ۼӽ��
		//�ݹ飬˫��ѭ��ʵ��
		for (int i = n; i > 1; i /= 2) {
			for (int j = 0; j < i / 2; j++) {
				arr[j * 2] = j * 2;
				arr[j * 2 + 1] = j * 2 + 1;
				arr[j] = arr[j * 2] + arr[j * 2 + 1];
			}
		}
		sum = arr[0];
		count--;
	}
	return 0;
}