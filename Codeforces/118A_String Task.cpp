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

char str;

int main()
{
    while(scanf("%c", &str) == 1)
    {
        if(str == '\n')
            break;
        str = tolower(str);
        if(str != 'a' && str != 'o' && str != 'y' && str != 'e' && str != 'u' && str != 'i')
           printf(".%c", str);
    }

    return 0;
}
