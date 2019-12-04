#include <iostream>
#include <algorithm> 
using namespace std;
template<class Type>
int BinarySearch(Type a[],const Type& x,int n)
{
	//��a[0]<=a[1]<=...<=a[n-1]������x
	//�ҵ�xʱ�������������е�λ�ã����򷵻�-1 
	int left=0; //��һ���� 
	int right=n-1; //���һ���� 
	while(left<=right)  
	{
		int middle=(left+right)/2;
		if(x==a[middle]) 
			return middle; //�ҵ�Ҫ������Ԫ�� 
		if(x>a[middle]) //���м������ 
			left=middle+1; 
		else //���м����С 
			right=middle-1;
	}
	return -1;//δ�ҵ�x 
}
int main()
{
	int n;
	cout<<"���������鳤�ȣ�"<<endl;
	cin>>n;
	cout<<"���������飨�ÿո���������ִ�С�������У���"<<endl;
	int a[100];
	//����Ԫ�� 
	for(int i=0;i<n;i++)
		cin>>a[i];
	//Ҫ������Ԫ�� 
	int x;
	cout<<"������Ҫ������Ԫ�أ�"<<endl;
	while(cin>>x)
	{
		int s=BinarySearch(a,x,n);//���صĽṹ��ֵ��s 
		if(s==-1)
			cout<<"û���ҵ�"<<endl;
		else
			cout<<"Ԫ���ǵ�"<<s+1<<"��"<<endl; 
		cout<<"������Ҫ������Ԫ�أ�"<<endl;
	} 
	return 0;
} 
