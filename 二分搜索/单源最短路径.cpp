#include<bits/stdc++.h>
using namespace std;
inline int read()
{
    int x=0,k=1; char c=getchar();
    while(c<'0'||c>'9'){if(c=='-')k=-1;c=getchar();}
    while(c>='0'&&c<='9')x=(x<<3)+(x<<1)+(c^48),c=getchar();
    return x*k;
}
#define maxn 10005
#define maxm 500005
#define inf 1234567890
int n,m,s,tot,dis[maxn],head[maxn];
bool vis[maxn];
struct Edge
{
      int next,to,w;
}h[maxm];
void add(int u,int v,int w)
{
    h[++tot].next=head[u];
    h[tot].to=v;
    h[tot].w=w;
    head[u]=tot;
}
//�����dijkstra�㷨������һ��
queue<int> q;
//�����Ż�
inline void spfa()
{
    for(int i=1; i<=n; i++)
    {
        dis[i]=inf;
        //����ֵ
    }
    int u,v;
    q.push(s);
    dis[s]=0;
    //������ֵ��Ϊ0
    vis[s]=1;//��仰�ɼӿɲ��ӣ���Ϊѭ����ʱ��vis[s]�ֻᱻ��Ϊ0
    while(!q.empty())
    //��������û��Ԫ�ص�ʱ���Ǿ��Ѿ����������еĵ�Դ���·��
    {
        u=q.front();
        //�����ֽڵ��¼���������׽ڵ�
        q.pop();
        vis[u]=0;
        for(int i=head[u];i;i=h[i].next)
        //Ѱ����u�����ı�
        {
            v=h[i].to;
            if(dis[v]>dis[u]+h[i].w)
            {
                dis[v]=dis[u]+h[i].w;
                //�ɳڲ�������floyd�Ƚ�����
                if(!vis[v])
                {
                //�Ѿ��ڶ�����ĵ�Ͳ����ٽ�����
                      vis[v]=1;
                      q.push(v);
                }
            }
        }
    }
}
int main(){
    n=read(),m=read(),s=read();
    for(int i=1,u,v,w;i<=m;i++)
    {
        u=read(),v=read(),w=read();
        add(u,v,w);
    }
    spfa();
    for(int i=1; i<=n; i++)
    {
        printf("%d ",dis[i]);
    }
    return 0;
}
