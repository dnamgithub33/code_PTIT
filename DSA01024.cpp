#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
vector<string> res;
map<int,string> m;
set<string> se;
void xuat()
{
    for(int i=1;i<=k;i++)
    {
        cout<<m[a[i]]<<" ";
    }
    cout<<endl;
}
void Try(int i)
{
    if(i==k+1)
        xuat();
    else
        {
            for(int j=a[i-1]+1;j<=n-k+i;j++)
            {
                a[i]=j;
                Try(i+1);
            }
        }
}
int main(int argc, char const *argv[])
{
    int t;
    
        cin>>n>>k;
        for(int i=1;i<=n;i++)
            {
                string s;
                cin>>s;
                se.insert(s);
            }
        int i=1;
        for(auto x:se)
        {
            m[i]=x;
            i++;
        }
        n=i-1;
        a[0]=0;
        Try(1);
        
        
    return 0;
}
