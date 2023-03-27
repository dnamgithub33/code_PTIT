#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],b[100],s,c;
void xuat()
{
    if(s==k)
    {
        c++;
        cout<<"[";
        int dem=0;
        for(int i=0;i<n;i++)
            if(b[i])
            {
                if(dem==0)
                    cout<<a[i];
                else
                    cout<<" "<<a[i];
                dem++;
            }
        cout<<"] ";
    }
}
void Try(int i)
{
    if(i==n)
    {
        xuat();
    }
    else
    {
        for(int j=1;j>=0;j--)
        {
            b[i]=j;
            if(j)
                s+=a[i];
            Try(i+1);
            if(j)
                s-=a[i];
        }
    }
}
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        s=0;
        c=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        Try(0);
        if(c==0)
        cout<<-1;
        cout<<endl;
    }
    return 0;
}
