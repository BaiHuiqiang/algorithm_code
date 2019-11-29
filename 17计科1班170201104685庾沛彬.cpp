/*
�༶��17�������ѧ�뼼��1�� 
ѧ�ţ�170201104685
����������� 

���������㷨 
*/

#include<iostream>
using namespace std;

int BinarySearch(int s[], int n, int key)
{
	int left = 0;
	int right = n - 1;
	
	while (left <= right)
	{
		int middle = left + ((right - left) >> 1);
		if (s[middle] > key)
		{
			right = middle - 1;
		} 
		else if (s[middle] < key)
		{
			left = middle + 1;
		}
		else
		{
			return middle;	
		}		
	}

	return -1;
}

int main()
{
	int s[5]={1,5,7,2,8};
	int x;
	cout<<"���������Ԫ�أ�";
	cin>>x;
	int a=BinarySearch(s,5,x);
	cout<<endl<<"{1,5,7,2,8}"<<endl; 
	cout<<"����Ԫ��"<<x<<"���±�Ϊ"<<a<<endl;
	return 0;
}
