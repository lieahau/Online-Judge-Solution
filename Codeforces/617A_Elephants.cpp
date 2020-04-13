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

int x, ans;

int main()
{
    scanf("%d", &x);
    ans = 0;
    if(x >= 5)
    {
        ans += (x/5);
        x %= 5;
    }
    if(x >= 4)
    {
        ans += (x/4);
        x %= 4;
    }
    if(x >= 3)
    {
        ans += (x/3);
        x %= 3;
    }
    if(x >= 2)
    {
        ans += (x/2);
        x %= 2;
    }
    if(x >= 1)
    {
        ans += x;
        x %= 1;
    }
    cout << ans << endl;

    return 0;
}
