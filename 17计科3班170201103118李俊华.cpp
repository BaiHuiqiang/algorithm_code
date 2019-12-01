#include<stdio.h>
int BinarySearch(int a[], const int& x,int n){
	int left=0;
	int right=n-1;
	int middle;
	while(left<=right)
	{
		middle=(left+right)/2;
		if(x==a[middle])
		{
			return middle;
		}
		if(x>a[middle])
		{
			left=middle+1;
		}
		else
		{
			right=middle-1;
		}
	}
	return -1;
} 
int main()
{
	int num;
	int a[]={1,5,8,10,14,17,19,21};
	printf("����Ҫ���ҵ�����");
	scanf("%d",&num);
	int arr=BinarySearch(a,num,8);
	if(arr == -1)
		printf("δ�ҵ�");
	else
		printf("�ҵ�a[%d]=%d",arr,num);
	return 0;
}
