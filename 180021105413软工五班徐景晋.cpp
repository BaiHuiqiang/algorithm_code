#include<iostream>
#include<climits>
#include<vector>
const int M=100;
using namespace std;
struct node{//������Ϣ 
	int father;//�ýڵ��ֱ�Ӹ��ڵ� 
	int cost;//�ýڵ㵽Դ�������Ȩֵ 
}; 
struct edge{//���б߶�����뵽������ȥ�������±�Ϊ�ñߵ���� 
	int dest;//�ߵĽ�������±� 
	int cost;
};
node vertex[M];
bool isVisited[M]={0};//��ʾĳ���ڵ��ǲ��Ǳ����ʹ� 
vector<edge> graph[M];//���������ʽ����ͼ����ΪҪ�޸�ĳ���ڵ���ӽڵ��ֵ�����Ա��뱣��ͼ 
void printVertex(int v){//������㵽Դ������С���� 
	for(int i=1;i<=v;i++)
	cout<<i<<":"<<vertex[i].cost<<"   "<<vertex[i].father<<endl;
} 
void init(int v,int s){//v���ڵ㣬�����нڵ��ʼ��,sΪ��� 
	for(int i=1;i<=v;i++){
		vertex[i].cost=INT_MAX;//���нڵ��Ȩֵ���ǡ� 
		vertex[i].father=i;//���ڵ㶼�ǽڵ㱾�� 
	}
	vertex[s].cost=0;//Դ����ȨֵΪ0 
}
int getMin(int v){//��ȡû�з��ʹ�����С�ڵ� 
	int res=INT_MAX;
	int index=-1;
	for(int i=1;i<=v;i++){
		if((isVisited[i]==0)&&(res>=vertex[i].cost)){
			res=vertex[i].cost;
			index=i;
		}
	}
	isVisited[index]=1;
	return index;
}
void relax(int u){//�Ժ�u�����ӵ����нڵ�����ɳ� 
	int len=graph[u].size();
	for(int i=0;i<len;i++){
		int des=(graph[u][i]).dest;
		if((vertex[u].cost!=INT_MAX)&&(vertex[des].cost>vertex[u].cost+(graph[u][i]).cost)){
			vertex[des].cost=vertex[u].cost+(graph[u][i]).cost;
			vertex[des].father=u;
		}
	}
}
void dijkstra(int v,int e,int s){//ʱ�临�Ӷ�Ϊ��O(V^2+E) 
	init(v,s);//��ʼ�� 
	for(int i=1;i<=v;i++){//һ����V���ڵ㣬ÿ��ȡ��һ���ڵ㣬���һ����Ҫִ��V�� 
		int u=getMin(v);//ȡ����Դ�������Ľڵ� 
		relax(u);//�ɳ�������Դ������ڵĽڵ� 
	}
}
void printPath(int startPoint,int destination){
	if(destination==startPoint)
		cout<<destination;
	else{
		printPath(startPoint,vertex[destination].father);
		cout<<"-->"<<destination;
	}
}
 
void printRoad(int v,int s){
	for(int i=1;i<=v;i++){
		cout<<"from "<<s<<" to "<<i<<" smallest cost:"<<vertex[i].cost<<".path:";//������ٵķ���   ���ǵ��� 
		printPath(s,i);
		cout<<endl;	
	}
}
int main(){
	int v,e,s;//v������e���� sΪ��ʼ��
	cin>>v>>e>>s;//���������飬���С �� С ���� 6 6 1 
	int a,b,c;//a��b�Ļ���Ϊc 
	edge temp;
	for(int i=1;i<=e;i++){
		cin>>a>>b>>c;//��Ȩ 
		temp.dest=b;
		temp.cost=c;
		graph[a].push_back(temp);
	}
	dijkstra(v,e,s);
	printRoad(v,s);
}


