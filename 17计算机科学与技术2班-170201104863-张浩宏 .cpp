#include <iostream>
using namespace std; 


int BinarySearch(int a[],const int& x,int n){
	int left=0;
	int right=n-1;
	while(left<=right){
		int middle=(left+right)/2;
		if(x==a[middle])
			return middle;
		if(x>a[middle])
			left=middle+1;
		else
			right=middle=1;
	}
		return -1;
	}

int main(){
	int a[8]={2,5,8,14,21,66,88,97};
	int x=6;
	int n=8;
	int tem=BinarySearch(a,x,n);
	if(tem!=-1){
	cout<<"��Ѱ�ҵ�Ԫ���±�:"<<tem<<endl;
	}else{
		cout<<"��Ѱ�ҵ�Ԫ�ز�����"<<endl;
	}
	return 0;	
}
