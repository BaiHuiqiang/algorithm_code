#include<iostream>
using namespace std;
int search(int *a,int m,int c)
{
  int low=0;
  int high=m-1;
  while(low<=high)
  {
	  int mid=(low+high)/2;
	  if(a[mid]==c)
          return mid;
	  else
		  if(c>a[mid])
			  low=mid+1;
		  else
			  high=mid-1;
  }
  return -1;//����ʧ�� 
}
int main()
{
    int a[16]={2,5,7,12,14,15,17,21,24,26,32,35,56,66,76,78};
	int c;
	cout<<"���������������c"<<endl;
	cin>>c;
	int temp=search(a,16,c);
	if(temp==-1)
		cout<<"��Ҫ�ҵ����ֲ�����"<<endl;
	else
        cout<<"��Ҫ�ҵ����ֶ�Ӧ����ĵ�"<<(temp+1)<<"��Ԫ��"<<endl;
	return 0;
}

