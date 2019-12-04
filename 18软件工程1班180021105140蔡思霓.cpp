#include<stdio.h>
#define ElemType int
typedef struct
{
	ElemType data[MaxSize];//˳���Ԫ��
	int length;            //˳���ǰ���� 
}SqList;

Status InitList(SqList &L)
{
	memset(L.data,0,sizeof(L));//��ʼ������Ϊ0
	L.length=0;                //��ʼ������Ϊ0
	return 0;
}

bool CreatList(SqList &L,int n)
{
	if(n<0||n>MaxSize)false;//n�Ƿ�
	for(int i=0;i<n;i++){
		scanf("%d",&L.data[i]);
		L.length++;
	}
	return true;
}

//���ֲ��Һ���

int Binary_search(SqList L,ElemType key)
{
	int low = 0;int mid = 0;int high = L.length-1;
	while(low<=high)
	{
		mid = (low+high)/2;
 		if(key==L.data[mid]){
			return mid;
		}
		else if(key>L.data[mid]){
			low = mid+1;
		}
		else{
			high = mid-1;
		}
	}
	return -1;
}

void Create(SqList &L)
{
	int n;bool flag;
	printf("������Ҫ������˳�����(>1):");
	scanf("%d",&n);
	printf("������%d�������ո������:",n);
	flag=CreatList(L,n);
	if(flag){
		printf("�����ɹ���\n");
		PrintList(L);
	}
	else printf("���볤�ȷǷ���\n");
}

void SelectSort(SqList &L)
{
	int min;int temp;
	for(int i=0;i<L.length;i++){
		min=i;
		for(int j=i+1;j<L.length;j++){
			if(L.data[j]<L.data[min])min=j;
		}			
		if(min!=i){
			temp=L.data[min];
			L.data[min]=L.data[i];
			L.data[i]=temp;
		}
	}
}

void Binary(SqList L){
	int key;int place;
	SelectSort(L);       //���ֲ���ǰ������
	PrintList(L);
	printf("������Ҫ���ҵ�ֵ��\n");
	scanf("%d",&key);
	place=Binary_search(L,key);
	if(place>=0)printf("λ�ã���0��Ϊ��%d\n",place);
	else printf("δ�ҵ���\n");
}			

int main(){
    SqList L;
	int choice;
    InitList(L);
    Search(L);break;
    PrintList(L);break;
    Binary(L);break;
    return 0;
}
