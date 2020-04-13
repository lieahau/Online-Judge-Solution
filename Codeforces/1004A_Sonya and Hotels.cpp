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


int n, d, arr[200], ans;

int main()
{
    ans = 2;
    scanf("%d %d", &n, &d);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(i)
        {
            if(arr[i] - arr[i-1] == d*2)
                ans++;
            else if(arr[i] - arr[i-1] > d*2)
                ans += 2;
        }
    }
    printf("%d\n", ans);

    return 0;
}
