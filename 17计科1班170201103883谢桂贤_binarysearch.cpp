#include <iostream>
using namespace std;
template<class Type>
int BinarySearch(Type a[],const Type& x,int n){
	int left=0;    int right=n-1;
    while(left<=right){
    	int middle=(left+right)/2;
    	if(x==a[middle])
    	    return middle;
    	
    	if(x>a[middle])
    		left=middle+1;
    		
    	else
    		right=middle-1;
    	
    }
    return-1;
}
main()
{
	char a[6];
	cout<<"�����������Ѿ��ź�����ַ���"<<endl; 
	for(int i=0;i<6;i++){
		cin>>a[i];
	} 
	char b;
	cout<<"������Ҫ�ҵ��ַ���"<<endl; 
	cin>>b;
	int p=BinarySearch(a,b,6);
	cout<<"λ�ڣ�"<<endl;
	cout<<p;
	
}
