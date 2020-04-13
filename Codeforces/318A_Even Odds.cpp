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


int main()
{
    long long int n, k;
    cin >> n >> k;
    if(k <= (n+1) / 2)
        cout << k * 2 - 1 << endl;
    else
        cout << (k - (n + 1) / 2) * 2 << endl;

    return 0;
}
