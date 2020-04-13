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

int n, arr[200], ans[200];

int main()
{
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        ans[arr[i]] = i;
    }
    for(int i = 1; i <= n; i++)
    {
        if(i-1) printf(" ");
        printf("%d", ans[i]);
    }
    printf("\n");

    return 0;
}
