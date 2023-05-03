#include<bits/stdc++.h>
using namespace std;
int n,c;
int a[100][100];
bool check(int x,int y)
{
    for(int i=0;i<n;i++)
    {
        if(a[i][y]||a[x][i])
            return false;
    }
    int i=x-1,j=y-1;
    while (i>=0&&j>=0)
    {
        if(a[i][j])
            return false;
        i--;
        j--;
    }
    i=x-1;
    j=y+1;
    while (i>=0&&j<n)
    {
        if(a[i][j])
            return false;
        i--;
        j++;
    }
    return true;
}
void canPlace(int row)
{
    if(row==n)
    {
        c++;
        return;
        
    }
    else
    {
        for(int j=0;j<n;j++)
        {
            if(check(row,j))
            {
                a[row][j]=1;
                canPlace(row+1);
                a[row][j]=0;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        c=0;
        memset(a,0,sizeof(a));
        canPlace(0);
        cout<<c<<endl;
    }
    
    return 0;
}
