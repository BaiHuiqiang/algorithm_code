
#include<iostream>

#include<cmath>

using namespace std;

 

int l[20];//�ʺ���������

int n;//�ʺ����

 

void output(int n) {//���n�ʺ��ĳ����

	int i;

	for (i = 1; i <= n; i++) {

		cout << l[i];

	}

	cout << endl;

}

 

int place(int t,int r) {//�жϵ�r�лʺ��ܷ���ڵ�t��

	int i=1;

	while(i<r){//�ʺ������rһ��Ҫ����i

		if (t == l[i] || abs(r-i) == abs(t - l[i])) {

			return 0;

		}

		++i;

	}

	return 1;

}

 

void nqueen(int m) {//�ݹ����

	int i;

	for (i=1; i <= n; i++) {

		l[m] = i;

		if (place(i,m)) {

			if (m == n) {

				output(n);//������һ���ʺ�Ҳ������ϣ���������

			}

			else {

				nqueen(m + 1);//���򣬽�����һ���ʺ�ķ���

			}

		}

	}

}

 

int main() {

	cout << "������1~20���ڵ�����Ϊ�ʺ������";

	cin >> n;

	if (n > 20) {

		cout << "����ֵƫ�����������룺";

		cin >> n;

	}

	nqueen(1);

	system("pause");

	return 0;

}

