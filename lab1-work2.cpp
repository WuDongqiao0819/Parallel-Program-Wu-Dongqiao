#include<iostream>
using namespace std;
int main() {
	int n = 4797;  
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
	int count = 5;
	while (count > 0) {
		for (int i = 0; i < n; i++) {
			sum[i] = 0;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				sum[j] += arr[i][j] * test[i];
			}
		}
		count--;
	}
	return 0;
}