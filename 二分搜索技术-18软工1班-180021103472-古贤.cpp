 
	#include <iostream> 
	#include<stdlib.h>      
	using namespace std;   
	  
	template<class Type>  
	int BinarySearch(Type a[],const Type& x,int n);  
	  
	int main()  
	{  
	    int x;  
	    int a[20];
		cout<<"����һ��20���ڵ�����";
		cin>>x;  
	    for(int i=0; i<20; i++)  
	    {  
	        a[i] = i + 1;  
	    }  
	    int n=BinarySearch(a,x,20);
	    cout<<endl;
	    cout<<"������������ "<<x<<" ��λ���±��ǣ� "<<n;
		cout<<endl;   
	    system("pause");
		return 0;  
	}  
	  
	template<class Type>  
	int BinarySearch(Type a[],const Type& x,int n)  
	{  
	    int left = 0;  
	    int right = n-1;  
	    while(left<=right)  
	    {  
	    	cout<<"left="<<left<<"\t"<<"right="<<right;
	        int mid = (left + right)/2; 
			cout<<"\t"<<"mid="<<mid; 
	        if(x == a[mid])  
	        {  
	            return mid;  
	        }  
	        if(x>a[mid])  
            {  
	            left = mid + 1;  
	        }  
            else  
	        {  
	            right = mid - 1;  
	        }
			cout<<endl;  
       }  
	  
    return -1;  
   }  

