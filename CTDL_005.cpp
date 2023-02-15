#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int x;
    cin>>x;
    for(int i=0;i<n;i++)
        if(a[i]!=x)
            cout<<a[i]<<" ";
            
    return 0;
}
