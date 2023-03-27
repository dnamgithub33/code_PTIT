#include<bits/stdc++.h>
using namespace std;
bool visited[1000];
int n;
int a[1000][1000];
stack<int> st;
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        visited[i] = false; // dinh i chua duoc duyet
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    st.push(1);
    while(!st.empty())
    {
        int now=st.top();
        st.pop();
        if(!visited[now])
        {
            visited[now]=true;
            cout<<now<<" ";
            for(int i=n;i>=1;i--)
                if(a[now][i]&&!visited[i])
                {
                    st.push(i);
                }
        }
    }
}