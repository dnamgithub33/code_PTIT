#include<bits/stdc++.h>
using namespace std;
int n;
int a[100];
int check()
{
    if(!a[1]||a[n])
        return 0;
    else
    {
        for(int i=1;i<n;i++)
        {
            if(!(!a[i]||!a[i+1]))
                return 0;
        }
        return 1;
    }
        
}
void xuat()
{
    if(check())
    {
        for(int i=1;i<=n;i++)
            if(a[i])
                cout<<'H';
            else
                cout<<'A';
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
        cin>>n;
        Try(1);
        
    }
    
    return 0;
}
