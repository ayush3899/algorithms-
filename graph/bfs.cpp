#include<bits/stdc++.h>
using namespace std;
vector<int>v[10000<<1];
int level[n+5];
bool visited[n];

void bfs(int s,int x)
{
  level[s]=0;
  queue<int>q;
  q.push(s);
  visited[s]=true;
    while(!q.empty())
    {
      int p=q.front();
      q.pop();
      for(int i=0;i<v[p].size();i++)
      {
        if(visited[v[p][i]]==false)
        {
          levle[v[p][i]]=level[p]+1;
          q.push(v[p][i]);
          vis[v[p][i]]=true;
        }
      }
    }
return ;
}

int main()
{
  int n,e;
  int x,y;
  cin>>n>>e;
  for(int i=0;i<e;i++)
  {
    cin>>x>>y;
    v[x].push_back(y);
    v[y].push_back(x);
  }
  bfs(1);
  return 0;
}
