#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int BinarySearch(int *a,int x,int n){
	int left=0;
	int right=n-1;
	while(left<=right){
		int middle=(left+right)/2;
		if(x==a[middle])
			return middle;
		if(x>a[middle])
			left=middle+1;
		else
			right=middle-1;
	}
	return -1;
}
int main(){
	int a[10]={1,4,6,7,12,20,64,78,98,99};
	int j,k;
	int i=0;
	cout<<"��������Ҫ���ҵ�����";
	cin>>j;
	k=BinarySearch(a,j,10);
	if(k==-1)
		cout<<"δ�ҵ���Ҫ���ҵ���"<<endl;
	else 
		cout<<"��Ҫ���ҵ����������еĵ�"<<k+1<<"��"<<endl; 
	return 0;
}
