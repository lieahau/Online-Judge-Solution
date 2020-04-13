#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    long long int a[n+5], b[m+5], ans[n+5], maks;

    for(int i = 0; i < n; i++)
        cin>>a[i];
    for(int i = 0; i < m; i++)
        cin>>b[i];

    for(int i = 0; i < n; i++)
    {
        maks = LLONG_MIN;
        for(int j = 0; j < m; j++)
            maks = max(maks, a[i]*b[j]);
        ans[i] = maks;
    }
    sort(ans, ans+n);
    cout<<ans[n-2];
    // karena angka terbesar (n-1) di hide sesuai perintah soal

    return 0;
}
