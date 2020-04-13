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

string str;
int len;
bool ans;

int main()
{
    cin >> str;
    len = str.length();

    ans = false;
    for(int i = 1; i < len-1; i++)
    {
        if(str[i-1] != '.' && str[i] != '.' && str[i+1] != '.' &&
           str[i-1] != str[i] && str[i+1] != str[i] && str[i+1] != str[i-1])
        {
            ans = true;
            break;
        }
    }

    if(ans)
        printf("Yes\n");
    else
        printf("No\n");


    return 0;
}
