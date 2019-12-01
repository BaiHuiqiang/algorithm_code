#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>

int binarySearch(int a[], const int& x, int n)
{
	int left = 0, right = n - 1;
	while (left <= right)
	{
		int middle = (left + right) / 2;
		if (x == a[middle])
		{
			return middle;
		}
		if (x > a[middle])
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}
	return -1;
}



int main()
{
	int a[] = { 1,3,5,7,11,14 };
	int len = sizeof(a) / sizeof(int);
	for (int i = 0; i < len; i++)
		printf("%d  ",a[i]);
	printf("\n����������Ҫ���ҵ�Ԫ��:");
	int elem = -1;
	scanf("%d", &elem);
	if (binarySearch(a, elem, len) == -1)
		printf("δ�ҵ���Ԫ��\n");
	else
		printf("��Ԫ������λ�ã�%d\n", binarySearch(a, elem, len));
	system("pause");
	return 0;
}
