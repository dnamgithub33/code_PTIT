#include<iostream>
using namespace std;
int n,N,a[100];
void print()
{
    for(int i=1;i<=N;i++)
        cout<<a[i]<<" ";
    for(int i=n/2;i>=1;i--)
        cout<<a[i]<<" ";
    cout<<endl;
}
void Try(int i)
{
    if(i==N+1)
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
    cin>>n;
    if(n%2)
        N=n/2+1;
    else 
        N=n/2;
    Try(1);
    return 0;
}
