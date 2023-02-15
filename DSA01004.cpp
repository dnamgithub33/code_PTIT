#include<bits/stdc++.h>
using namespace std;
int k,a[100],n;
void xuat()
{
    for(int i=1;i<=k;i++)
        cout<<a[i];
    cout<<" ";
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
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        a[0]=0;
        Try(1);
        cout<<endl;
    }
    
    return 0;
}
