#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int a[7]={1,3,7,12,13,17,26};
	int n=7,x,middle,i=0;
	int left=0; int right=n-1;
	cout<<"����������ҵ�����"<<endl;
	cin>>x;
	while(left<=right){
		i++;	
		middle=(left+right)/2;
		if(x==a[middle]){
			break;
//			return middle;
		}
		if(x>a[middle]){
			left=middle+1;
		}
		else{
			right=middle-1;
		}
	
	}
	cout<<"������"<<i<<"��"<<endl; 

	return -1;
} 
