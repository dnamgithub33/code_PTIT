#include<bits/stdc++.h>
using namespace std;
int n;
int A[100],a[100],b[100];
void xuat()
{
    for(int i=1;i<=n;i++)
        cout<<A[a[i]]<<" ";
    cout<<endl;
}
void Try(int i)
{
    if(i==n+1)
        xuat();
    else
    {
        for(int j=1;j<=n;j++)
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
    
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>A[i];
        sort(A+1,A+n+1);
        Try(1);
    
    
    return 0;
}
