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

int n, a, b, cur, ans;

int main()
{
    ans = 0;
    cur = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        cur -= a; cur += b;
        ans = max(ans, cur);
    }
    printf("%d\n", ans);


    return 0;
}
