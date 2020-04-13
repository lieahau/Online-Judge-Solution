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

int n, maks, arr[100007], dp[100007];

int main()
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        dp[i] = 1;
    }

    int j;
    for(int i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(arr[j] >= arr[j-1] && arr[i] <= arr[j])
                dp[i]++;
            else
                break;
        }
        if(maks < dp[i]) maks = dp[i];
        i = j-1;
    }
    printf("%d\n", maks);

    return 0;
}
