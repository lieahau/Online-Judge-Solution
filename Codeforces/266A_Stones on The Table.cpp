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

int n, ans;
char str[100];

int main()
{
    ans = 0;
    scanf("%d", &n); getchar();
    scanf("%c", &str[0]);
    for(int i = 1; i < n; i++)
    {
        scanf("%c", &str[i]);
        if(str[i] == str[i-1]) ans++;
    }
    printf("%d\n", ans);

    return 0;
}
