#include <iostream>
#include<string.h>
#include<stdio.h>
#define N 7
using namespace std;
int BinSearch(int *A,int target,int left,int right){
	while(left <= right){
		int mid = (left+right)/2;
		if(target < A[mid])
			right = mid - 1;
		else if(A[mid] < target)
			left = mid + 1;
		else
			return mid;
	}
	return -1;
}

int main(){
	int nums[N],i=0,a;
	cout << "������7�����֣��ÿո����(�س���������): "; 
	while(cin >> a){
    	nums[i] = a;
		char ch = getchar(); 
    	if(ch == '\n')
    	break;
    	else{
			i++;
			continue; 
		} 
	}
	cout << "������Ҫ���ҵ�����: "; 
	cin >> a;
	cout << "��������Ϊ:" << a << "\t�±�Ϊ(-1�����ʧ��):" << BinSearch(nums,a,0,6) << endl;
	return 0;
}
