#include <iostream>
using namespace std;
template<class Type>
int BinarySearch(Type a[],const Type& x,int n){
 int left=0;  int right=n-1;
 while(left<=right){
  int middle = (left+right)/2;
  if(x==a[middle])
   return middle;
  if(x>a[middle])
   left=middle+1;
  else
   right=middle-1;
 }
 return -1;
} 
main()
{
 char m='h';
 char y[4]={'a','d','h','z'};
 int w;
 int p=BinarySearch(y,m,4);
 cout<<"location��"<<p+1;
}
