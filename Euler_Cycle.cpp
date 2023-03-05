#include<bits/stdc++.h>
using namespace std;
int n,a[100][100],first_ke;
stack<int> st;
bool ke(int j)
{
    for(int i=1;i<=n;i++)
    {
        if(a[j][i])
        {
            first_ke=i; 
            return true;          
        }
    }
    return false;
}
int main(int argc, char const *argv[])
{
    cin>>n;
    int x;
    cin>>x;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    vector<int> v;
    st.push(x);
    while(!st.empty())
    {
        int s=st.top();
        if(ke(s))
        {
            st.push(first_ke);
            a[s][first_ke]=0;
            a[first_ke][s]=0;
        }
        else
        {
            st.pop();
            v.push_back(s);
        }
    }
    reverse(v.begin(),v.end());
    for(auto y:v)
        cout<<y<<" ";
    return 0;
}
