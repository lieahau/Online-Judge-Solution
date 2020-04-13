#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, l, a[1010];
    cin >> n >> l;
    double ans = 0;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a+n);
    ans = max(a[0], l-a[n-1]);

    for(int i = 0; i < n-1; i++){
        ans = max(ans, (a[i+1]-a[i]) / 2.0);
    }

    printf("%.10lf", ans);

    return 0;
}
