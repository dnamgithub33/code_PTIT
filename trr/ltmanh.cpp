#include<bits/stdc++.h>
using namespace std;
#define MAX 1000+5
bool vs[MAX];
int a[MAX][MAX], n, m;
int dem;
void DFS(int u){
dem++;
vs[u]=true;
for(int i=1;i<=n;i++){
if(vs[i]==false && a[u][i]==1){
vs[i]=true;
DFS(i);
}
}
}
int main(){

cin>>n;
int u,v; 
   for(int i = 	1;i<=n;i++) 
   {
   	for(int j = 1;j<=n;j++ ) {
   		cin>>a[i][j];
		   }
	   }
   
int ok=1;
for(int i=1;i<=n;i++){
memset(vs,false,sizeof(vs));
dem=0;
DFS(i);
if(dem!=n){
ok=0;
break;
}
if(ok==0) break;
}
if(ok==1) cout << "strongly connected";
else cout << "not strongly connected";
}
