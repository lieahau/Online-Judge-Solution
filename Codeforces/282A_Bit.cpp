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
char str[5];

int main()
{
    ans = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        getchar();
        scanf("%s", str);
        if(str[1] == '+') ans++;
        else if(str[1] == '-') ans--;
    }
    printf("%d\n", ans);

    return 0;
}
