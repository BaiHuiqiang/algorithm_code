//�㷨7.1��˳�����
#include<iostream>
using namespace std;
#define MAXSIZE 100
#define OK 1;

typedef struct{
	int key;//�ؼ�����
}ElemType;

typedef struct{
	ElemType *R;
	int length;
}SSTable;

int InitList_SSTable(SSTable &L)
{
	L.R=new ElemType[MAXSIZE];
	if (!L.R)
	{
		cout<<"��ʼ������";
		return 0;
	}
	L.length=0;
	return OK;
}

int Insert_SSTable(SSTable &L) 
{
	int j=1;//***********�޸Ĵ�1******
	for(int i=1;i<MAXSIZE;i++)//**********�޸Ĵ�2****************
	{
		L.R[i].key=j;
		L.length++;
		j++;
	}
	return 1;
}
/*
int Search_Seq(SSTable ST, int key){
    //��˳���ST��˳�������ؼ��ֵ���key������Ԫ�ء����ҵ�������ֵΪ
    //��Ԫ���ڱ��е�λ�ã�����Ϊ0
     for (int i=ST.length; i>=1; --i)  
             if (ST.R[i].key==key) return i;		//�Ӻ���ǰ��        
     return 0;
   }// Search_Seq
*/

//***********************************************************************//
//�㷨7.2 ���ü����ڵ�˳����� 
int Search_Seq(SSTable ST,int key)
{//��˳���ST��˳�������ؼ��ֵ���key������Ԫ�ء����ҵ�������ֵΪ��Ԫ���ڱ��е�λ�ã�����Ϊ0
    int i;
	ST.R[0].key=key;
    for(i=ST.length;ST.R[i].key!=key;--i);//********�޸Ĵ�3****************
    return i;
}
//�㷨7.3 �۰���� 
int Search_Bin(SSTable ST,int key)
{//�������ST���۰������ؼ��ֵ���key������Ԫ�ء����ҵ�������ֵΪ��Ԫ���ڱ��е�λ�ã�����Ϊ0
    int low=1;int high=ST.length;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(key==ST.R[mid].key) return mid;
		else if(key<ST.R[mid].key) high=mid-1;
		else low=mid+1;
	}
	return 0; 
} 
//************************************************************************//
void Show_End(int result,int testkey)
{
	if(result==0)
		cout<<"δ�ҵ�"<<testkey<<endl;
	else
		cout<<"�ҵ�"<<testkey<<"λ��Ϊ"<<result<<endl;
	return;
}
int main()
{
	SSTable ST;
	Search_Bin;
	InitList_SSTable(ST);
	Insert_SSTable(ST);
	int testkey1=7,testkey2=200;
	int result;
	result=Search_Seq(ST, testkey1);
	Show_End(result,testkey1);
	result=Search_Seq(ST, testkey2);
	Show_End(result,testkey2);
	return 0;
}
