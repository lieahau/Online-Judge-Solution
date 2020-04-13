/*
    People who don't work hard
    don't have the right
    to be envious of the people with talent.
    People fail because
    they don't understand
    the hard work necessary to be successful.
*/

#include <bits/stdc++.h>

using namespace std;

long long int tc, s, a, b, c, ans;

int main()
{
    scanf("%lld", &tc);

    while(tc--)
    {
        scanf("%lld %lld %lld %lld", &s, &a, &b, &c);
        ans = s/c;
        ans += (ans/a) * b;
        printf("%lld\n", ans);
    }

    return 0;
}
