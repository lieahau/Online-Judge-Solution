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

int n, m, temp1, temp2;

int main()
{
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= m; i++)
        scanf("%d %d", &temp1, &temp2);

    for(int i = 1; i <= n; i++)
        printf("%d", i%2);

    return 0;
}
