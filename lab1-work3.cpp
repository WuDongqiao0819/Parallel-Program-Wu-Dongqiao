#include<iostream>
#include<math.h>
using namespace std;
int main() {
	//��ʼ��
	int count = 5;//ѭ������
	int m = 15;
	int n = pow(2, m);//�����ģ������ָ��
	int* arr = new int[n];//���ۼӵ���
	while (count > 0) {
		int sum = 0;//�ۼӽ��
		//ƽ���㷨,����ۼӣ�ѭ��չ������4
		for (int i = 0; i < n; i += 4) {
			arr[i] = i;
			sum += arr[i];
			arr[i + 1] = i + 1;
			sum += arr[i + 1];
			arr[i + 2] = i + 2;
			sum += arr[i + 2];
			arr[i + 3] = i + 3;
			sum += arr[i + 3];
		}
		count--;
	}
	return 0;
}