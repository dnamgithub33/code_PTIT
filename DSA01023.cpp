#include<bits/stdc++.h>
using namespace std;
int k,a[100],n,b[100],dem;
bool stop;
void xuat()
{
    dem++;
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=b[i])
            return;
    }
    stop=true;
}
void Try(int i)
{
    if(stop) return;
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
        dem=0;
        stop=false;
        for(int i=1;i<=k;i++)
            cin>>b[i];
        Try(1);
        #
        cout<<dem<<endl;
    }
    
    return 0;
}
