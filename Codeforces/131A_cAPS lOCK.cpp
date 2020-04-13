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

char str[200], counter;

int main()
{
    counter = 0;
    scanf("%c", &str[0]);
    for(int i = 1;; i++)
    {
        scanf("%c", &str[i]);
        if(str[i] == '\n'){ str[i] = '\0'; break; }
        if(str[i] >= 'A' && str[i] <= 'Z')
            counter++;
    }
    if(counter == strlen(str)-1)
    {
        int len = strlen(str);
        if(str[0] >= 'a' && str[0] <= 'z')
            printf("%c", toupper(str[0]));
        else
            printf("%c", tolower(str[0]));
        for(int i = 1; i < len; i++)
            printf("%c", tolower(str[i]));
    }
    else printf("%s", str);

    printf("\n");

    return 0;
}
