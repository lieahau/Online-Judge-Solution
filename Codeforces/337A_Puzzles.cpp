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

int n, m, arr[100], diff;

int main()
{
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++)
        scanf("%d", &arr[i]);
    sort(arr, arr+m);

    diff = arr[n-1] - arr[0];
    for(int i = 1; i < m; i++)
    {
        if(i+n-1 < m)
        {
            diff = min(diff, arr[i+n-1] - arr[i]);
            if(diff == 0) break;
        }
    }
    printf("%d\n", diff);

    return 0;
}
