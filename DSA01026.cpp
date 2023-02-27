#include<bits/stdc++.h>
using namespace std;
int n;
int a[100];
bool check()
{
    int c6=0;
    int c8=0;
    if(!a[n-1])
        return false;
    for(int i=0;i<n;i++)
    {
        if(!a[i])
        {
            c8++;
            c6=0;
            if(c8>1)
                return false;
        }
        else
        {
            c6++;
            c8=0;
            if(c6>3)
                return false;
        }
    }
    return true;
}
void xuat()
{
    for(int i=0;i<n;i++)
    {
        if(!a[i])
            cout<<'8';
        else
            cout<<'6';
    }
    cout<<endl;
}
void Try(int i)
{
    if(i==n)
    {
        if(check())
            xuat();
    }
    else
    {
        for(int j=1;j>=0;j--)
        {
            a[i]=j;
            Try(i+1);
        }
    }
}
int main(int argc, char const *argv[])
{
    cin>>n;
    Try(1);
    return 0;
}
