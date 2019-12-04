#include<iostream>

using namespace std;

const int inf = 999; 

void Dijkstra(int n,int source,int dist[],int prev[],int c[6][6])
{
	bool s[inf];//���ڱ�ʾ���Ƿ���s������ 
	for(int i=1; i<=n; i++)
	{
		dist[i] = c[source][i];
		s[i] = false;//��ʼ����ʱ�򣬳���source�����еĵ㶼���� s���� 
		if(dist[i] == inf) prev[i] = 0;
		else prev[i] = source;//������ڣ�ǰ������Դ�� 
	} 
	dist[source] = 0;
	s[source] = true;
	
	for(int i=2; i<=n; i++)//û���õ�i��ֵ��ֻ�ǿ���ѭ������,��ʾҪ��n-1���� 
	{
		int minDist = inf;
		int u = source;//u��¼�¾���source����ĵ�
		
		for(int j=1; j<=n; j++)	//��v-s�������ҵ� 
		{
			//j�㲻��s�����У��ҵ�source�ľ���С����һ���㵽source�ľ��룬����u��¼�¸õ� 
			if(!s[j] && dist[j]<minDist)
			{
				u = j;
				minDist = dist[u];
			}
		}
		
		s[u] = true;//��u�����s����
		
		for(int j=1; j<=n; j++)//��s���ϼ����µ��ʱ����Ҫ����dist[]��prev[] 
		{
			if(!s[j] && c[u][j]<inf)//j�㲻��s�����У��� �µ��� j������ 
			{
				int newDist = dist[u] + c[u][j];//�µ㵽source�ľ��� + �µ㵽 j��ľ���
				if( newDist < dist[j] ) 
				{
				    dist[j] = newDist;
					prev[j] = u;//�µ����j��ǰ���㣬��ʾ��ʱ��source��j�㾭��u������� 
				}
			}
		} 
	} 
}

int main()
{
	/*
	n����
	dist[i]��ʾ��source�㵽 i�����̾���
	k=previous[i]��ʾ���� k�㵽�� i��������·�� 
	c[][]���ٽӾ��� 
	*/ 
int c[6][6]={	
				{inf,inf,inf,inf,inf,inf},
			    {inf,0,10,inf,30,100},
			 	{inf,inf,0,50,inf,inf},
			 	{inf,inf,inf,0,inf,10},
				{inf,inf,inf,20,0,60},
				{inf,inf,inf,inf,inf,0}
			};
	int dist[6];
	int prev[6];
	int source = 1;
	int n = 5;
	Dijkstra(n,source,dist,prev,c);	
	cout<<"��Դ�㵽��������·����(����Ϊ0��ʾԴ��):";
	for(int i=1; i<=n; i++)
	cout<<dist[i]<<" ";
	cout<<endl;
	cout<<"���������Դ�㵽����ķ���·��"<<endl; 
	for(int i=1; i<=n; i++)
	{
		if(i != source) 
		{
			int j = i;
			cout<<"��Դ�㵽"<<j<<"������·��Ϊ:"<<endl;
			int k = j;
			while(k != source)
			{
				if( j!=source )
					cout<<j<<"  <-  ";
				else 	
					cout<<j;
				k = j;
				j = prev[j];
			}
			cout<<endl;
		}
	}
	return 0;
}

