#include<bits/stdc++.h>
using namespace std;
int n;
int a[100];
void xuat()
{
    for(int i=1;i<=n;i++)
        if(!a[i])
            cout<<'A';
        else
            cout<<'B';
    cout<<" ";
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
        cout<<endl;
    }
    
    return 0;
}
