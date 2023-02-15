#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
void xuat()
{
    int s=0;
    for(int i=1;i<=n;i++)
        if(a[i])
            s++;
    if(s==k)
    {
        for(int i=1;i<=n;i++)
            cout<<a[i];
        cout<<endl;
    }
        
}
void Try(int i)
{
    if(i==n+1)
        xuat();
    else
    {
        for(int j=0;j<=1;j++)
        {
            a[i]=j;
            Try(i+1);
        }
    }
}
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        Try(1);
    }
    
    return 0;
}
