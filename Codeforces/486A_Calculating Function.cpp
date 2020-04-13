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

long long int n, ans;

int main()
{
    cin >> n;

    ans = n/2;
    if(n % 2 == 1) ans -= n;
    cout << ans << endl;

    return 0;
}
