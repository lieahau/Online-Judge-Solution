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
int h[MAX], minim, maks;
int n, k, cost, temp, ans;

int main()
{
    minim = MAX;
    maks = cost = 0;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        minim = min(minim, temp);
        maks = max(maks, temp);
        h[temp]++;
    }

    for(int i = maks; i > minim; i--)
    {
        h[i] += h[i+1];
        if(cost + h[i] > k)
        {
            ans++;
            cost = 0;
        }
        cost += h[i];
    }
    if(cost)
        ans++;

    printf("%d\n", ans);


    return 0;
}
