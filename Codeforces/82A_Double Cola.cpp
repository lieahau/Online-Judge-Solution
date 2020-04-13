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
    int n;
    cin >> n;
    n--;
    vector<string> ans = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    while(n >= 5)
    {
        n -= 5;
        n /= 2;
    }
    cout << ans[n] << endl;

    return 0;
}
