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

int n, k, arr[100], ans;

int main()
{
    scanf("%d %d", &n, &k);
    ans = 0;
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if(arr[k-1] == 0)
    {
        for(int i = 0; i < k; i++)
        {
            if(arr[i] == 0)
            {
                ans = i;
                break;
            }
        }
    }
    else if(k == n)
        ans = k;
    else
    {
        ans = k;
        for(int i = k; i < n; i++)
            if(arr[i] == arr[k-1])
                ans++;
            else
                break;
    }

    printf("%d\n", ans);

    return 0;
}
