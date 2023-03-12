#include<bits/stdc++.h>
using namespace std;
int n;
int x,d=0;
int a[100][100];
bool Visited[100];
int v[100];
void xuat()
{
    
    for(int i=0;i<=n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    d++;
}
void Try(int i)
{
    if(i==n+1)
    {
        if(v[0]==v[n])
            xuat();
    }
    for(int j=1;j<=n;j++)
    {
        if(a[v[i-1]][j]&&!Visited[j])
        {
            v[i]=j;
            Visited[j]=true;
            Try(i+1);
            Visited[j]=false;
        }
    }
}
int main(int argc, char const *argv[])
{
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        Visited[i]=false;
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    }
    v[0]=x;
    Try(1);
    return 0;
}
