#include<bits/stdc++.h>
using namespace std;
int n,a[100][100],check[100]={};
void dfs(int u) {
    check[u]=1;
    for(int i = 0;i<n;i++) {
        if(a[u][i]==1&&check[i]==0){
            dfs(i);
        }
    }
}
int main () {
  
    cin>>n;
for(int i=0;i<n;i++) {
    for(int j = 0;j<n;j++) {
        cin>>a[i][j];
    }
}
int d=0;
for(int i = 0;i<n;i++){
    if(check[i]==0) {
        dfs(i);
        d++;
    }
}
cout<<d;

}
