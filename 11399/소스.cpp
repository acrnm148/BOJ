#include<iostream>
using namespace std;

void main() {

	//��� �� N �Է�
	int N;
	while (1)
	{
		cin >> N;
		if (N >= 1 && N <= 1000) break;
	}

	//�� ��� ���� �ð� Pi �Է�
	int *P = new int[N];
	for (int i = 0; i < N; i++) cin >> P[i];

	//�������� ���� - ��������
	for (int i = 0; i < N-1; i++) {
		for (int j = i+1; j < N; j++) {
			if (P[i] > P[j]) {
				int tmp = P[i];
				P[i] = P[j];
				P[j] = tmp;
			}
		}
	}

	//�� ���
	int sum = 0;
	for (int i = 0; i < N; i++) {
		cout<< P[i];
	}
	cout << sum;
}