#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"������������ָ���"<<endl;
	cin>>n;
	int p[n];
	cout<<"�������飨�ո��������������"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	int t;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<(n-1);j++)
		{
			if(p[j]>p[j+1])
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
	cout<<"����������Ϊ��"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}
	cout<<endl;
	cout<<"������Ҫ���ҵ�����"<<endl;
	int tag;
	cin>>tag;
	int left=0;
	int right=n-1;
	int middle=0;
	int end;
	int sign=0;
	while(left<right)
	{
		middle=(left+right)/2;
		if(p[middle]==tag)
		{
			end=middle;
			sign=1;
			break;
		}
		else
		if(tag>p[middle])
		{
			left=middle+1;
		}
		else
		{
			right=middle-1;
		}
	}
	if(sign==0)
	{
		cout<<"δ�������ҵ�ָ������"<<endl;
	}
	else
	{
		cout<<"���������������������±�Ϊ��"<<end<<endl; 
	}
	return 0;
} 





