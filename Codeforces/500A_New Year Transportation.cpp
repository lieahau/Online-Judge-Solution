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

const int MAX = 1e5;
int n, t, arr[MAX];

int main()
{
    scanf("%d %d", &n, &t);
    for(int i = 1; i < n; i++)
        scanf("%d", &arr[i]);

    int cur = 1;
    bool ans = false;
    while(cur <= t)
    {
        cur += arr[cur];
        if(cur == t){
            ans = true;
            break;
        }
    }
    if(ans) printf("YES\n");
    else printf("NO\n");

    return 0;
}
