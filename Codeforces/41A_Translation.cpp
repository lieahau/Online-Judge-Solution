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

string str1, str2;

int main()
{
    cin >> str1;
    getchar();
    cin >> str2;
    reverse(str1.begin(), str1.end());
    if(str1 == str2)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
