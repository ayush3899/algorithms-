#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[1000];
int n;
pair<long long ,<int,int> >p[];

int in()
{
  for(int i=0;i<n;i++)
  a[i]=i;
  return 0;
}

int root(int x)
{
  while(x!=a[x])
  {
    a[x]=a[a[x]];
    x=a[x];
  }
  return x;
}

void un(int x,int y)
{
  int a1=root(x);
  int b1=root(y);
  a[a1]=a[b1]
}

int kruskal(pair<long long ,<int,int> >p[])
{
  int min=0;
  for(int i=0;i<e;i++)
  {
    int a=p[i].second.first;
    int b=p[i].second.second
    int cost=p[i].first;
    if(root(a)!=root(b))
    {
      min+=cost;
      un(a,b);
    }
  }
}

int main()
{
  int e,n,w;
  cin>>n>>e;
    for(int i=0;i<e;i++)
    {
      cin>>x>>y>>w;
      p[i].make_pair(w,make_pair(x,y));
    }
    sort(p,p+e);
  cout<<"minimum cost is :"<<kruskal(p)<<"\n";

    return 0;
}
