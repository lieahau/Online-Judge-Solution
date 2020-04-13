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

int n;
string str;
bool ans;

int main()
{
    scanf("%d", &n); getchar();
    cin >> str;

    ans = true;
    if(n == 1 && str[0] == '0')
        ans = false;
    else
    {
        for(int i = 0; i < n; i++)
        {
            if(i+1 < n && str.substr(i, 2) == "11")
            {
                ans = false;
                break;
            }
            else if(i+2 < n && str.substr(i, 3) == "000")
            {
                ans = false;
                break;
            }
            else if((i == 0 || i == n-2) && str.substr(i, 2) == "00")
            {
                ans = false;
                break;
            }
        }
    }

    if(ans) printf("Yes\n");
    else printf("No\n");

    return 0;
}
