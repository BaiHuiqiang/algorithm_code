#include <iostream>
using namespace std;

template<class Type>
int Partition(Type a[],int p,int r)
{
	int i=p,j=r+1;
	Type x=a[p];
	while(true)
	{
		while(a[++i]<x&&i<r);
		while(a[--j]>x);
		if(i>=j) break;
		Type temp=a[j];
		a[j]=a[i];
		a[i]=temp;
	}
	a[p]=a[j];
	a[j]=x;
	return j;
}

template<class Type>
void QuickSort(Type a[],int p,int r)   //����ʹ�����С�������� 
{
	if(p<r)
	{
	     int q=Partition(a,p,r);       
		 QuickSort(a,p,q-1);	      //�����
		 QuickSort(a,q+1,r);          //���ұ�
	}
}

template<class Type>
int BinarySearch(Type a[],const Type& x,int n)     //�����ź��� 
{
	int left=0;
	int right=n-1;
	while(left<=right)
	{
	    int middle=(left+right)/2;
		if(x==a[middle])	return middle;    //�����������е�λ�� 
		if(x>a[middle])   left=middle+1;
		else right=middle-1;		
	}
	return -1;	
}
 
int main()
{
	int *a,n=0,t;
	
	while(n<=0)
	{
	    cout<<"����������Ϊ1�����鳤�ȣ� ";
	    cin>>n;
	}
	
	
	a=new int[n+1];
	
    cout<<"���濪ʼΪ���鸳ֵ��"<<endl;	
    for(int i=0;i<n;i++)
	{ 
	    cin>>a[i];
	    if(a[i]=='\0'&&a[i]!=0) i--; //��ֵ 
	}	
	
	QuickSort(a,0,n-1);   //��С���󣬿������� 
	
  /*  for(int i=0;i<n;i++)
	{ 
	    cout<<a[i]<<endl;   //������� 
	}		*/
	
	cout<<"��������Ҫ���ҵ����� ";
	cin>>t; 	
	cout<<endl; 
	if(BinarySearch(a,t,n)==-1) cout<<"�Ҳ�������"<<endl<<endl;
	else cout<<t<<"�������е��±�Ϊ"<<BinarySearch(a,t,n)<<endl; 
		
	delete []a;
	
	return 0;	
}
