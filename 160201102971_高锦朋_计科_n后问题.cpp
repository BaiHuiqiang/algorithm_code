#define _CRT_SECURE_NO_WARNINGS

#include<math.h>
#include <stdio.h>
#include<stdlib.h>

class Queen {
	friend int nQueen(int);
private :
	bool Place(int k);
	void Backtrack(int t);
	int n,	//�ʺ���� 
		*x;//��ǰ��
	long sum; //��ǰ���ҵ��Ŀ��з�����
};

bool Queen::Place(int k) {
	for (int j = 1; j < k; j++) {
		if ((fabs(k - j) == fabs(x[j] - x[k]))||x[j]==x[k])  //�ж��Ƿ���ͬһ�Խ��߻�ͬһ����
			return false;
	}
	return true;
}

void Queen::Backtrack(int t) {
	if (t > n) {
		for (int i = 1; i <= n; i++) {
			printf("%d ", x[i]);
		}
		printf("\n");
		sum++;
	}
	else {
		for (int i = 1; i <= n; i++) {
			x[t] = i;
			if (Place(t))
				Backtrack(t + 1);
		}
	}
}

int nQueen(int n) {
	Queen queen;
	queen.n = n;
	queen.sum = 0;
	int *p = new int[n + 1];
	for (int i = 0; i <= n; i++)
		p[i] = 0;
	queen.x = p;
	queen.Backtrack(1);
	delete[] p;
	return queen.sum;
}



int main() {
	int n;
	printf("������n�ʺ������nֵ��");
	scanf("%d", &n);
	if (n > 0) {
		printf("%d�ʺ�����Ŀ��з�����\n", n);
		nQueen(n);
	}
	
	system("pause");
	return 0;
}
