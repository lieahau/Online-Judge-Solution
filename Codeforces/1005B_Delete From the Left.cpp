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
char a[MAX], b[MAX];
int ans;

int main()
{
    scanf("%s", a); getchar();
    scanf("%s", b); getchar();

    int lenA = strlen(a);
    int lenB = strlen(b);
    int len = min(lenA, lenB);

    for(int i = 1; i <= len; i++)
    {
        if(a[lenA - i] != b[lenB - i])
            break;

        ans++;
    }
    ans *= 2;
    ans = lenA+lenB - ans;
    printf("%d\n", ans);


    return 0;
}
