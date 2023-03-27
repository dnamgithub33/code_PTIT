#include<bits/stdc++.h>
using namespace std;
int b[100];
int dem1,dem0,k,dem;
int m,n;
void xuat()
{
    if(dem0==n-1&&dem1==m-1)
    {
        dem++;
    }
}
void Try(int i)
{
    if(i==k)
    {
        xuat();
    }
    else
    {
        for(int j=1;j>=0;j--)
        {
            b[i]=j;
            if(j)
                dem1++;
            if(!j)
                dem0++;
            Try(i+1);
            if(j)
                dem1--;
            if(!j)
                dem0--;
        }
    }
}
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--)
    {
        dem=0;
        cin>>m>>n;
        int a[100][100];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                cin>>a[i][j];
        dem1=0;
        dem0=0;
        k=n+m-2;
        Try(0);
        cout<<dem<<endl;
    }
    return 0;
}
