#include<bits/stdc++.h>
using namespace std;
int n;
int a[100],b[100];
void xuat()
{
    for(int i=1;i<=n;i++)
        cout<<a[i];
    cout<<" ";
}
void Try(int i)
{
    if(i==n+1)
        xuat();
    else
    {
        for(int j=n;j>=1;j--)
        {
            if(b[j]!=1)
            {
                a[i]=j;
                b[j]=1;
                Try(i+1);
                b[j]=0;
            }
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
