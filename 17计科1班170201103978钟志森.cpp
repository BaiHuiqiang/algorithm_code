#include<iostream>
using namespace std;

template<class Type>

int sorting(Type a[],const Type &num,int length)
{
	int left=0;
	int right=length-1;
	while(left<=right)
	{
		int middle=(left+right)/2;
		if(num==a[middle])
		{
			return middle;
		}
		if(num>a[middle])
		{
			left=middle+1;
		} 
		else{
			right = middle-1;
		}
	}
	return -1;
}



int main()
{
	int length,rtn,status2;
	double a[10],b,num;
	bool status=false;	
	bool status1=false;
	while(1)
	{
		cout<<"��������Ҫ����Ķ�������������ĳ���length��length>0��"<<endl;
		cout<<"length=";cin>>length; 
		if(length<=0)
		{
			cout<<"����������鳤��Ӧ����0"<<endl;
		}
		else
		{
			break;
		 } 
	}
	while(1)
	{
		
		cout<<"������һ���ź����"<<length<<"�����ֵ����飨��С����"<<endl;
		for(int i=0;i<length;i++)
		{
		
			cout<<"a["<<i<<"]=";cin>>a[i];
			if(i==0)
			{
				b=a[0];
			 } 
			if(a[i]>=b)
			{
				b=a[i];
			}
			else{
				cout<<"��"<<i+1<<"������������в�Ϊ����"<<endl;
				cout<<"����������"<<endl; 
				break; 
			}
			if(i==length-1)
			{
				status=true;
			}
		}
			if(status)
			{
				break;
			}
	} 
	while(1)
	{
		cout<<"������Ҫ������� num:";cin>>num;
		rtn=sorting(a,num,length);
		if(rtn==-1)
		{
			cout<<"�����鲻��������"<<num;
		}
		cout<<"����"<<num<<"λ������ĵ�"<<rtn<<"λ,a["<<rtn<<"]=num="<<num<<endl;
			cout<<"������ѯ�밴1���˳���ѯ�밴�����:";cin>>status2;
		if(status2!=1)
		{
			break;
		}
	 } 
	cout<<"���˳�ϵͳ";
	return 0;
 } 
