#include<bits/stdc++.h>
using namespace std;
int n;
bool visited[100];
int a[100];
string s;
void xuat()
{
    for(int i=1;i<=n;i++)
    {
        cout<<s[a[i]-1];
    }
    cout<<" ";
}
void Try(int i)
{
    if(i==n+1)
    {
        xuat();
    }
    else
    {
        for(int j=1;j<=n;j++)
        {
            if(!visited[j])
            {
                a[i]=j;
                visited[j]=true;
                Try(i+1);
                visited[j]=false;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.length();
        Try(1);
        cout<<endl;
    }
    return 0;
}
