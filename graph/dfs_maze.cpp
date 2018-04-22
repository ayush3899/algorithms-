#include<bits/stdc++.h>
using namespace std;

bool visited[11][11];
int mat[11][11];
int n,m;

bool dfs(int x,int y,int n,int m)
{
  if(x>n || y>m)
  return false;
  if(x<0 || y<0)
  return false;
  if(x==n && y==m)
  return true;

  if(visited[x][y]==true)
    return false;
    visited[x][y]=true;

  if(mat[x][y]==0)
  return false;

  if(dfs(x+1,y,n,m)==true)
  return true;

  if(dfs(x,y+1,n,m)==true)
  return true;

  if(dfs(x-1,y,n,m)==true)
  return true;

  if(dfs(x,y-1,n,m)==true)
  return true;

  return false;

}

int main()
{
  for(int i=0;i<11;i++)
  {
    for(int j=0;j<11;j++)
    {
      visited[i][j]=false;
    }
  }
  cin>>n>>m;
  for(int i=0;i<=n;i++)
  {
    for(int j=0;j<=m;j++)
    {
      cin>>mat[i][j];
    }
  }
  if(dfs(1,1,n,m))
  cout<<"Yes"<<"\n";
  else
  cout<<"no"<<"\n";
  return 0;
}
