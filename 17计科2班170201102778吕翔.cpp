//2.3 ���������㷨
#include<iostream>

using namespace std;

template<class Type>
/** 
* ��������
* 
*@param a[] ���ҵļ��� 
*@param x Ŀ��Ԫ��
*@param n ����Ԫ�ظ���
*@return Ŀ��Ԫ�ص��±�(δ�ҵ���Ϊ-1) 
*/ 
int BinarySearch(Type a[], const Type& x, int n)
{
	int left = 0;
	int right = n-1;
	
	while(left <= right)
	{
		int middle = (left+right)/2;
		
		if(x == a[middle])
			return middle;
		else if(x > a[middle])
			left = middle+1;
		else
			right = middle-1;
	}
	return -1;
}
 
int main()
{
	int a[10]={1,3,6,8,12,16,20,24,26,31};
	//int target = 5;
	int target = 8;
	int res = BinarySearch(a, target, 10);
	
	if(res == -1)
		cout<<"δ�ҵ�"<<endl;              
	else
		cout<<"Ŀ��Ԫ�ص��±�Ϊ��"<<(res+1)<<endl;
		
	return 0;
	
}
