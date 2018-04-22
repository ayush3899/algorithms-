#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> >v[10000];
int dis[10000];
int vis[10000];
int n,m,a,b,start,w;

void djk(int start)
{
  priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >q;
  q.push(make_pair(0,start));
  while(q!.empty())
  {
    pair<int,int>p;
    p=q.top();
    q.pop();
    int y=p.second;
    if(vis[y]==0)
    {
      vis[y]=1;

      for(int i=0;i<v[y].size();i++)
      {
        pair<int,int>t=v[y][i];
        int z=t.second;
        int w=t.first;
        if(dis[z]>dis[y]+w)
        {
          dis[z]=dis[y]+w;
        }
        if(vis[z]==0)
        {
          q.push(make_pair(dis[z],z));
        }
      }
    }
  }

}

int main()
{
  cin>>n>>m;
  for(int i=0;i<=n;i++)
  {
    vis[i]=0;
    dis[i]=10000000;
  }
  for(int i=0;i<m;i++)
  {
    cin>>a>>b>>w;
    v[a].push_back(make_pair(w,b));
    v[b].push_back(make_pair(w,a));
  }
  start=1;
  dis[start]=0;
  djk(start);
  for(int i=1;i<=n;i++)
  {
    if(dist[i]==1000000)
    {
      cout<<-1<<" ";
    }
    else
    {
      cout<<dist[i]<<" ";
    }
  }
  cout<<"\n";
  for(int i=0;<=n;i++)
  {
    v[i].clear();
  }

  return 0;
}
