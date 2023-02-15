#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[1000];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int i=n-1;
        while(i>0&&a[i]>a[i+1]) 
                    i--;
        if(i==0)
        {
            for(int j=n;j>=1;j--)
                cout<<a[j]<<" ";
            cout<<endl;
        }
        else
        {
            int temp=a[i];
            int j=n;
            while(a[j]<a[i]) j--;
            a[i]=a[j];
            a[j]=temp;
            for(int l=1;l<=i;l++)
                cout<<a[l]<<" ";
            for(int l=n;l>i;l--)
                cout<<a[l]<<" ";
            cout<<endl;
        }
    }
    
    return 0;
}
