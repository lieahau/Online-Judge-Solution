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

char str1[200], str2[200];

int main()
{
    scanf("%s", str1); getchar();
    scanf("%s", str2);

    if(strcmpi(str1, str2) == 0) printf("0\n");
    else if(strcmpi(str1, str2) < 0) printf("-1\n");
    else printf("1\n");

    return 0;
}
