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

double n, m, a;

int main()
{
    cin >> n >> m >> a;

    printf("%.0lf\n", ceil(n/a)*ceil(m/a));

    return 0;
}
