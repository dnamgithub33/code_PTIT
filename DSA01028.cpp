#include<bits/stdc++.h>
using namespace std;
int n,k,N;
int A[100],a[100];
set<int> s;
set<int>:: iterator it;
void xuat()
{
    for(int i=1;i<=k;i++)
        cout<<A[a[i]]<<" ";
    cout<<endl;
}
void Try(int i)
{
    if(i==k+1)
    {
        xuat();
    }
    else
    {
        for(int j=a[i-1]+1;j<=N-k+i;j++)
        {
            a[i]=j;
            Try(i+1);
        }
    }
}
int main(int argc, char const *argv[])
{
    cin>>n>>k;
    
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    N=s.size();
    int i=1;
    a[0]=0;
    for(it=s.begin();it!=s.end();it++)
    {
        A[i]=*it;
        i++;
    }
    //for(int j=1;j<=N;j++)
    //cout<<A[j]<<" ";
    //cout<<N;
    Try(1);
    return 0;
}
