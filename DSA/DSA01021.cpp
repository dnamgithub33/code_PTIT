#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k,dem=0;
    cin >> n >> k;
    vector<int> a(k + 1);
    map<int,int> m;
    for (int i = 1; i <= k; ++i) {
        cin >> a[i];
        m[a[i]]=1;
    }

    int i = k;
    while (a[i] == n - k + i) i--;
    if (i == 0) 
    {
        a[i] = 0;
        cout<<k<<endl;
        return;
    }
    else a[i]++;
    
    while (i < k) {
        a[i + 1] = a[i] + 1;
        i++;
    }
    for (int i = 1; i <= k; ++i) {
        if(m[a[i]]==0&&a[i])
            dem++;
    }
    
        cout<<dem<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        
    }
    return 0;
}