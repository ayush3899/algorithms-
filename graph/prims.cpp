#include<bits/stdc++.h>
#define ll long long
using namespace std;
cons int max=1000000;
#define pair<long long,int>pi;
bool marked[max];
vector<pi>v[max];

long long prim(int x)
{
  priority_queue<pi,vector<pi>,greater<pi> >q;
  int y;
  long long min=0;
  pi p;
  q.push(make_pair(0,x));
  while(!q.empty())
  {
    p=q.pop();
    q.pop();
    x=p.seond;
    //chek for cycle for this vertex
    if(marked[x]==true)
      continue;
    min+=p.first;
    marked[x]=true;
    for(int i=0;i<v[x].size();i++)
    {
      y=v[x][i].second;
      if(marked[y]==false)
      q.push(v[x][i]);
    }
  }
  return min;
}


int main()
{
  int n,e,x,y;
  long long w,min;
  cin>>n>>e;
  for(int i=0;i<e;i++)
  {
    cin>>x>>y>>w;
    v[x].push_back(make_pair(w,y));
    v[y].push_back(make_pair(w,x));
  }
  min=prim(1);
  cout<<min<<"\n";
  return 0;
}
