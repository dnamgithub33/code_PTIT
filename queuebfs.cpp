#include<iostream>
#include<queue>
using namespace std;
#define Max 100
class graph{
int n,a[Max][Max],chuaxet[Max];
    public:
        void readdata();
        void init();
        void queuebfs(int u);
};
void graph::readdata(){
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) 
            cin>>a[i][j];
}
void graph::init(){
    for(int i=1;i<=n;i++) 
        chuaxet[i]=1;
}
void graph::queuebfs(int u){
    queue <int> hangdoi;
    hangdoi.push(u);
    chuaxet[u]=0;
    while(!hangdoi.empty()){
        int s=hangdoi.front();
        hangdoi.pop();
        cout<<s<<" ";
        for(int t=1;t<=n;t++){
            if(a[s][t]==1&&chuaxet[t]){
                hangdoi.push(t);
                chuaxet[t]=0;
            }
        }
    }
}
int main(){
    graph g;
    g.readdata();
    g.init();
    g.queuebfs(1);
}
