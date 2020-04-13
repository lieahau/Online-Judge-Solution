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
    long long int n, ans;
    scanf("%lld", &n);
    
    ans = 0;
    while(n)
    {
        int temp = n % 10;
        ans += temp;
        n /= 10;

        if(n && temp < 9)
        {
            n--;
            ans += 10;
        }
    }
    printf("%lld\n", ans);

    return 0;
}
