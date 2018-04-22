#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>v[10000];
int dist[10000];

void in(int m)
{
  for(int i=0;i<m+2;i++)
  {
    v[i].clear();
    dist=1000000;
  }
}

int main()
{
  int m,n;
  cin>>m>>n;
  in(m);
  int x,y,w;
  for(int i=0;i<m;i++)
  {
    cin>>x>>y>>w;
    v[i].push_back(x);
    v[i].push_back(Y);
    v[i].push_back(w);
  }
  dist[0]=0;
  for(int  i=0;i<n-1;i++)
  {
    int j=0;
    while(v[j].size()!=0)
    {
      if(dist[v[j][0]] + v[j][2]<dist[v[j][1]])
      {
        dist[v[j][1]]=dist[v[j][0]]+v[j][2];
      }
      j++;

    }

  }
  return 0;
}
