#include<bits/stdc++.h>
using namespace std;
int n,dem;
int a[20],b[20],c[20];
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
    if(i==n+1)
        xuat();
    else
        for(int j=1;j<=n;j++)
        {
            if(!c[j])
            {
                b[i]=j;
                c[j]=1;
                Try(i+1);
                c[j]=0;
            }
        }
}
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        dem=0;
        stop=false;
        memset(c,0,n);
        for(int i=1;i<=n;i++)
            cin>>a[i];
        Try(1);
        cout<<dem<<endl;
    }
    return 0;
}
