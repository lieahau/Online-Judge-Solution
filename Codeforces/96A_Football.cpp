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

int counter0, counter1;
char str;
bool danger;

int main()
{
    counter0 = 0;
    counter1 = 0;
    danger = false;
    while(scanf("%c", &str) == 1)
    {
        if(str == '\n')
            break;
        if(str == '1'){
            counter1++;
            counter0 = 0;
        }
        else{
            counter0++;
            counter1 = 0;
        }
        if(counter0 >= 7 || counter1 >= 7)
            danger = true;
    }
    if(danger) printf("YES\n");
    else printf("NO\n");

    return 0;
}
