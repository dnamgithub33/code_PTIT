#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int dem;
int n;
char v[1000];
void xuat()
{
    dem++;
    for(int i=1;i<=2*(n-1);i++)
        cout<<v[i];
    cout<<" ";
}
void Try(int x,int y)
{
    if(!a[x][y])
    {
        return;
    }
    if(x==n-1&&y==n-1)
    {
        xuat();
    }
    else
    {
        if(a[x+1][y])
        {
            v[x+1+y]='D';
            Try(x+1,y);
        }
        if(a[x][y+1])
        {
            v[x+y+1]='R';
            Try(x,y+1);
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
        cin>>n;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>a[i][j];
        Try(0,0);
        if(dem==0)
            cout<<-1;
        cout<<endl;
    }
    return 0;
}
