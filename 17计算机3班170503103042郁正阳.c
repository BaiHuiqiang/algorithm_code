#include <stdio.h> 
#include <stdlib.h> 
//template <class Type>
int BinarySearch(int *a, int x)
{
	int left=0;
	int right=9; 
	while(left<=right)
	{
		int middle=(left+right)/2; 
		if(x==a[middle])
			return middle;
		if(x>a[middle])
			left=middle+1;
		else
			right=middle-1;
	}
	return -1;
} 
void main()
{ 
	int *a,x,i; 
	int b[10]={0}; 
	a=b; 
	printf("�������С����10������:\n"); 
	for(i=1;i <=10;i++) 
	{ 
		scanf("%d",&b[i-1]); 
		printf("\n"); 
	} 
		printf("��Ҫ���ҵ���:\n"); 
		scanf("%d",&x); 
	if(!BinarySearch(a,x))
		printf("��Ҫ���ҵ���������\n"); 
	else
		printf("��Ҫ���ҵ������±�Ϊ %d \n",BinarySearch(a,x)); 
} 

