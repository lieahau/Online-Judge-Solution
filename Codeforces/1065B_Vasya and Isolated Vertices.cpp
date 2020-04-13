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

long long int n, m, ansMin, ansMaks;

int main()
{
    scanf("%lld %lld", &n, &m);

    if(n - 2 * m > 0)
        ansMin = n - 2 * m;

    while(1)
    {
        if(ansMaks * (ansMaks - 1) / 2 >= m)
            break;
        ansMaks++;
    }
    ansMaks = n - ansMaks;
    printf("%lld %lld\n", ansMin, ansMaks);

    return 0;
}
