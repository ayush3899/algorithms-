#include<bits/stdc++.h>
using namespace std;

vector<int>edges[100];
vector<int>dis[100];
vector<int>v[100];

int bfs(int s)
{
  deque<int>q;
  q.push_back(s);
  dis[s]=0;
  while(!q.empty())
  {
    int p=q.front();
    q.pop_front();
    for(int i=0;i<sizeof(edges[p]);i++)
    {
      if(dis[edges[p][i].first] > dis[p]+edges[p][i].second)
      {
        dis[edges[p][i].first]=dis[p]+edges[p][i].second;
        if(edges[p][i].second==0)
        {
          q.push_front(edges[p][i].first);
        }
        else
        {
          q.push_back(edges[p][i].first);
        }
      }
    }
  }
  for(int i=0;i<15;i++)
  cout<<dis[i]<<" ";
  return 0;
}

int main()
{
  int e,n;
  int x,y;
  cin>>n>>e;
  for(int i=0;i<e;i++)
  {
    cin>>x>>y>>w;
    v[x].push_back({y,w});
    v[y].push_back({x,w});
  }
  bfs(0);
return 0;
}

/*

9 13
0 1 0
0 7 1
1 7 1
1 2 1
2 3 0
2 5 0
2 8 1
3 4 1
3 5 1
4 5 1
4 5 1
5 6 1
6 7 1
7 8 1

*/
