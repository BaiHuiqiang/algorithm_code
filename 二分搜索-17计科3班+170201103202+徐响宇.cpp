#include<stdio.h>
 

int BinarySearch(int a[],int x,int n)
{
	int left=0; 
	int right=n-1;
	while(left<=right)
	{
		int middle=(left+right)/2;
		if(x==a[middle]) return middle;
		if(x>a[middle])  return left=middle+1;
		else right=middle-1;
	}
	return -1;
}
int main()
{
	//char m='h';
	//char y[5]={'j','h','g','f','d'};
	int m, y[100];
	int n,i;
	printf("���������鳤�ȣ�\n");
	scanf("%d",&n);
	printf("����������Ԫ�أ�\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&y[i]);
	}
	printf("��������Ҫ���ҵ�Ԫ��: \n");
	scanf("%d",&m);
	
    int p=BinarySearch(y,m,n);
    if (p!=-1) printf("���ҳɹ���%d������y[%d]��λ����",m,p);
    else printf("����ʧ�ܣ�");
    return 0;
}

