#include<bits/stdc++.h>
using namespace std;
int n;
int a[100];
vector<int> b;
void solve()
{
    vector<int> c(b.begin(),b.end());
    sort(c.begin(),c.end());
    if(c==b)
    {
        for(auto x:c)
            cout<<x<<" ";
        cout<<endl;
    }
}
int Try(int i)
{
    if(i==n)
    {
        solve();
    }
    else
    {
        for(int j=0;j<=1;j++)
        {
            if(j)
            {
                b.push_back(a[i]);
                Try(i+1);
                b.pop_back();
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    Try(0);
    return 0;
}
