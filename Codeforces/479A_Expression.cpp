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

int main()
{
    int a, b, c, ans;

    scanf("%d %d %d", &a, &b, &c);
    ans = max(a+b+c, a*b*c);
    ans = max(ans, a*b+c);
    ans = max(ans, a+b*c);
    ans = max(ans, (a+b)*c);
    ans = max(ans, a*(b+c));

    printf("%d\n", ans);

    return 0;
}
