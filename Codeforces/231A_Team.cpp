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

int tc, n, counter, ans;

int main()
{
    scanf("%d", &tc);
    ans = 0;
    for(int t = 1; t <= tc; t++)
    {
        counter = 0;
        for(int i = 0; i < 3; i++){
            scanf("%d", &n);
            if(n == 1)
                counter++;
        }
        if(counter >= 2)
            ans++;
    }
    printf("%d\n", ans);

    return 0;
}
