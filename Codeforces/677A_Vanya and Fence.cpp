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

int n, h, temp;

int main()
{
    int ans = 0;
    scanf("%d %d", &n, &h);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        if(temp <= h) ans++;
        else ans += 2;
    }
    printf("%d\n", ans);

    return 0;
}
