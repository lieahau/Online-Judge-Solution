#include <bits/stdc++.h>

using namespace std;

bool desc(int a, int b)
{
    return a > b;
}

int main()
{
    int n, twin = 0;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        twin += a[i];
    }

    sort(a, a+n, desc);

    int me = 0;
    int i = 0;
    int ans = 0;
    while(me <= twin)
    {
        me += a[i];
        twin -= a[i++];
        ans++;
    }
    cout << ans;

    return 0;
}
