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

int n, len;
char str[200];

int main()
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        getchar();
        scanf("%s", str);

        len = strlen(str);
        if(len <= 10)
            printf("%s\n", str);
        else
            printf("%c%d%c\n", str[0], len-2, str[len-1]);
    }


    return 0;
}
