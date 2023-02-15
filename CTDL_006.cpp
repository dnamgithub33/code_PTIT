#include<iostream>
#include<map>
using namespace std;
map<int,bool> s;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    for(int i=0;i<n;i++)
    {
        if(s[a[i]]==0)
        {
            cout<<a[i]<<" ";
            s[a[i]]=1;
        }
    }
    
    return 0;
}
