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
    int n, m;
    scanf("%d %d", &n, &m);

    int ans = 0;

    while(n){
        ++ans;
        n--;
        if(ans%m == 0) n++;
    }

    printf("%d\n", ans);

    return 0;
}
