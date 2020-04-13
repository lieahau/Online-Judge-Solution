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

int tc, a, b, dollar;
double totaljam, avg, ans;

int main()
{
    cin >> tc;
    while(tc--)
    {
        cin >> a >> b >> dollar;

        totaljam = a + b;
        avg = totaljam / 3.0;

        if(a <= avg)
            ans = 0;
        else if(a < 2 * avg)
            ans = ((double) dollar * ((double) a - avg)) / avg;
        else
            ans = dollar;

        cout << ans << endl;
    }

    return 0;
}
