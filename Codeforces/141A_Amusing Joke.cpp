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

string a, b, c;

int main()
{
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    a += b;

    if(a.length() == c.length())
    {
        sort(a.begin(), a.end());
        sort(c.begin(), c.end());

        int len = a.length();
        bool ans = true;
        for(int i = 0; i < len; i++)
        {
            if(a[i] != c[i]){
                ans = false;
                break;
            }
        }
        if(ans) printf("YES\n");
        else printf("NO\n");
    }
    else
        printf("NO\n");

    return 0;
}
