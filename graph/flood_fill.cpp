#include<bits/stdc++.h>
using namespace std;

bool visited[11][11];
int mat[11][11];
int n,m;

bool DFS(x, y, visited, n, m)
{
    if (x ≥ n || y ≥ m)
        return false;
    if(x < 0 || y < 0)
        return;
    if(visisted[x][y] == true)
        return;
    visited[x][y] = true;
    DFS(x-1, y-1, visited, n, m);
    DFS(x-1, y, visited, n, m);
    DFS(x-1, y+1, visited, n, m);
    DFS(x, y-1, visited, n, m);
    DFS(x, y+1, visited, n, m);
    DFS(x+1, y-1, visited, n, m);
    DFS(x+1, y, visited, n, m);
    DFS(x+1, y+1, visited, n, m);

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
  cout<<"enter starting points"<<"\n";
  cin>>x>>y;
  if(DFS(x,y,n,m))
    cout<<"Yes"<<"\n";
  else
    cout<<"no"<<"\n";
  return 0;
}
