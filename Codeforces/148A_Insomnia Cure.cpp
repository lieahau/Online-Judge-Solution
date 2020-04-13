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

const int MAX = 2e5+7;
bool dp[MAX];
long long int k, l, m, n, d, ans;
long long int temp1, temp2, temp3, temp4;

int main()
{
    cin >> k >> l >> m >> n >> d;

    temp1 = k;
    temp2 = l;
    temp3 = m;
    temp4 = n;

    ans = 0;
    if(k <= d)
    {
        ans++;
        dp[k] = true;
    }
    if(!dp[l] && l <= d)
    {
        dp[l] = true;
        ans++;
    }
    if(!dp[m] && m <= d)
    {
        dp[m] = true;
        ans++;
    }
    if(!dp[n] && n <= d)
    {
        dp[n] = true;
        ans++;
    }

    while(k <= d || l <= d || m <= d || n <= d)
    {
        if(k <= d)
            k += temp1;
        if(l <= d)
            l += temp2;
        if(m <= d)
            m += temp3;
        if(n <= d)
            n += temp4;

        if(!dp[k] && k <= d){
            dp[k] = true;
            ans++;
        }
        if(!dp[l] && l <= d){
            dp[l] = true;
            ans++;
        }
        if(!dp[m] && m <= d){
            dp[m] = true;
            ans++;
        }
        if(!dp[n] && n <= d){
            dp[n] = true;
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
