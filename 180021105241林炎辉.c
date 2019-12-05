//Dijkstra�㷨�����Դ���·������
#include <stdio.h>
#define V 1 //��Դ����ΪV
#define maxint 1000

int Dijkstra(int n,int v, int dist[],int prev[],int c[][20]) 
{
	int i,j;
	int s[20];
	for(i=1;i<=n;i++)
	{
		dist[i]=c[v][i];//dist[]��¼��������������·��  c[v][i]Ϊ�ڽӾ��� 
		s[i]=0;
		if(dist[i]==maxint)
		    prev[i]=0;
		else
		    prev[i]=v;   //ǰ�� 
	}
	dist[v]=0;s[v]=1;//s[]���飬��¼��㼯 
	
	for(i=1;i<n;i++)//ÿ��ת��һ���Ǻ�� 
	{
		int temp=maxint;
		int u=v;
		for(j=1;j<=n;j++)
		    if((!s[j])&&(dist[j]<temp))  //temp��¼�����dist 
		    {
		    	u=j;
		    	temp=dist[j];
			}
		s[u]=1;//u���Ϊ��� 
		//����dist[]
    for(j=1;j<=n;j++)
        if((!s[j])&&(c[u][j]<maxint))
        {
        	int newdist=dist[u]+c[u][j];
        	if(newdist<dist[j])
        	{
        		dist[j]=newdist;//�޸�����·�� 
        		prev[j]=u;
			}
		}
    	
	}
}
int main ()
{
	int i,j,k;
	int c[20][20];
	int dist[20],prev[20];
	int n,line;//nΪ���������lineΪ�ߵ����� 
	int m,pre;
	printf("�����붥�����Ϊ:\n");
	scanf("%d",&n);
	printf("������ߵ�����Ϊ:\n");
	scanf("%d",&line);
	for(i=1;i<=n;i++)
	    for(j=1;j<=n;j++)
	       c[i][j]=maxint;
	printf("��������ߵ�ȨֵΪ��\n");
	for(k=1;k<=line;k++)
	{
		scanf("%d%d",&i,&j);
		scanf("%d",&c[i][j]);
	}   
	Dijkstra(n,V,dist,prev,c);
	for(i=1;i<=n;i++)
	{
		printf("%d��%d�����·��Ϊ��",V,i);
		printf("%d\n",dist[i]);
		pre=prev[i];
		printf("·��Ϊ��%4d",i);
		while(pre!=0)
		{
			printf("%4d",pre);
			pre=prev[pre];
		}
		printf("\n");
	}    
	       
}
