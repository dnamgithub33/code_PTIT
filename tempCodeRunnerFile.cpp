#include<iostream>
#include<queue>
using namespace std;
int n,u,NoS=0;
int a[100][100];
int Side[100][3];
bool visited[100];
void xuat()
{
    for(int i=1;i<=NoS;i++)
    {
        if(Side[i][1]<Side[i][2])
            cout<<Side[i][1]<<" "<<Side[i][2]<<endl;
        else
            cout<<Side[i][2]<<" "<<Side[i][1]<<endl;
    }
    
}
void Try1(int i)
{
    visited[i]=true;
    if(NoS==n-1)
        xuat();
    else
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]&&!visited[j])
            {
                NoS++;
                Side[NoS][1]=i;
                Side[NoS][2]=j;
                Try1(j);
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    cin>>n>>u;
    for(int i=1;i<=n;i++)
    {
        visited[i]=false;
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    }
    cout<<"DFS tree"<<endl;
    Try1(u);
    
    cout<<"BFS tree"<<endl;
    NoS=0;
    for(int i=1;i<=n;i++)
        visited[i]=false;
    queue<int> q;
    q.push(u);
    visited[u]=true;
    int s;
    while (!q.empty())
    {
        s=q.front();
        q.pop();
        for(int i=1;i<=n;i++)
        {
            if(a[s][i]&&!visited[i])
            {
                NoS++;
                q.push(i);
                visited[i]=true;
                Side[NoS][1]=s;
                Side[NoS][2]=i;
            }
        }
    }
    xuat();   
    return 0;
}