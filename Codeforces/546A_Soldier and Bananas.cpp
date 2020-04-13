#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int k, n, w;
    long long int ans = 0;
    scanf("%lld %lld %lld", &k, &n, &w);

    ans = w*(2*k + (w - 1)*k)/2;

    if(ans > n)
        ans -= n;
    else
        ans = 0;
    cout << ans;

    return 0;
}
