#include<bits/stdc++.h>
using namespace std;

vector<int>v[100];
bool visited[10];

void dfs(int s)
{
  visited[s]=true;
  for(int i=0;i<v[s].size();i++).
  {
  if(visited[v[s][i]]==false)
  dfs(v[s][i]);
  }
}

void in()
{
  for(int i=0;i<10;i++)
  visited[i]=false;
}

int main()
{
  int n,e,x,y,c=0;
  cin>>n>>e;
  for(int i=0;i<e;i++)
  {
    cin>>x>>y;
    v[x].push_back(y);
    v[y].push_back(x);
  }
  in();
  for(int i=0;i<=n;i++)
  {
    if(visited[i]==false)
  {
    dfs(i);
    c++;
  }
  }
  cout<<"number of connected components"<<c<<"\n";
  return 0;
}
