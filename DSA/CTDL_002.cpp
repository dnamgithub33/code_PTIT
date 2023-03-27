#include<iostream>
using namespace std;
int n,N,a[100],b[100],dem=0;
long k;
void print()
{
    long s=0;
    for(int i=1;i<=n;i++)
            s+=b[i]*a[i];
    if(s==k)
    {
        dem++;
        for(int i=1;i<=n;i++)
        if(a[i])
            cout<<b[i]<<" ";
        cout<<endl;
    }
        
}
void Try(int i)
{
    if(i==n+1)
        print();
    
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
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>b[i];
    Try(1);
    cout<<dem;
    return 0;
}
