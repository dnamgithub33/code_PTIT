#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
char b[100];
void xuat()
{
    for(int i=1;i<=k;i++)
    {
        cout<<b[a[i]];
    }
    cout<<endl;
}
void Try(int i)
{
    if(i==k+1)
        xuat();
    else
    {
        for(int j=a[i-1]+1;j<=n-k+i;j++)
        {
            a[i]=j;
            Try(i+1);
        }
    }
}
int main(int argc, char const *argv[])
{
    int t;
    
    for(int i=65;i<=90;i++)
    {
        b[i-64]=i;
    }
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        a[0]=0;
        Try(1);
    }
    
    return 0;
}
