#include <stdio.h>
int BinarySearch(int a[], const int& x, int n)
{
    int left=0, right=n-1;
    while (left <= right)
    {
        int middle = (left+right)/2;
        if (x==a[middle])
        {
            return middle;
        }
        if (x > a[middle])
        {
            left = middle+1;
        }
        else
        {
            right = middle-1;
        }
    }
    return -1;
}
 
int main()
{
    //int a[] = {1,4,7,9,11,17};
    //printf("%d\n",BinarySearch(a,4,6));
    int i,x,a[100],n;
    printf("������Ҫ������ĳ��ȣ�\n");
    scanf("%d",&n); 
    printf("���������е�Ԫ�أ�\n");
    for(i=0;i<n;i++)
    { 
        scanf("%d",&a[i]);    
    } 
    printf("������������ҵ�Ԫ�أ�\n");
    scanf("%d",&x);  
	printf("��Ԫ���������е��±���%d\n",BinarySearch(a,x,n));
   
    return 0;
}

