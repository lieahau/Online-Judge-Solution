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

int tc, n, m;

int main()
{
    cin >> tc;
    while(tc--)
    {
        cin >> n >> m;

        if((n-1) % (m-1) != 0)
            cout << "cannot do this" << endl;
        else
            cout << (n-1)/(m-1) << endl;
    }

    return 0;
}
