
#include <iostream>�� 
using namespace std;

const int inf = 0x3f3f3f3f;

int edge[5][5] = 

{

	{-1,-1,-1,-1,-1},

	{-1, 0, 2, 6, 4},

	{-1, inf, 0,3, inf},

	{-1, 7, inf, 0, 1},

	{-1, 5, inf, 12, 0}

};

 

int main() {

	const int n = 4;//�������

	int dis[n+1];//��ǰ���㵽Դ��ľ���

	int book[n+1];//���㵽Դ���Ƿ�Ϊ��Сֵ

 

	//��ʼ������Դ��Ϊn1

	for (int i = 1; i <= n; ++i)

		dis[i] = edge[1][i];

 

	//book�����ʼ��

	memset(book, 0, sizeof(book));

	book[1] = 1;

 

	int min;//��ǰ��δȷ�����·���ĵ㣬��Դ�����С�����С

	//Dijkstra�㷨�������

	for (int i = 1; i <= n - 1; ++i) {

		//�ҵ���1�Ŷ�������Ķ���

		min = inf;

		int u;

		for (int j = 1; j <= n; ++j) {

			if (book[j] == 0 && dis[j] < min) {

				min = dis[j];

				u = j;

			}

		}

		//ÿ�ֵ���������ȷ��һ���㵽Դ�����̾��룬���ֻҪ����n-1��

		book[u] = 1;

		//ͨ���Ѿ�ȷ���ĵ㣬��dis������и���

		//��δȷ���ĵ�ͨ����u����С�˵�Դ��ľ��룩

		for (int v = 1; v <= n; ++v) {

			if (edge[u][v] < inf) {

				if (dis[v] > dis[u] + edge[u][v])

					dis[v] = dis[u] + edge[u][v];

			}

		}

	}

	//������

	for (int i = 1; i <= n; ++i)

		cout << dis[i] << ' ';

	system("pause");

	return 0;

}

