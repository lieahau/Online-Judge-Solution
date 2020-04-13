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

const int MAX = 100;
string T;
int lenT;

bool isPalindrome()
{
    for (int i = 0; i < lenT/2; i++)
        if (T[i] != T[lenT - i - 1])
            return false;

    // palindrome string
    return true;
}

int solve()
{
    char ch = T[0];

    int i;
    for(i = 1; i < lenT; i++)
        if (T[i] != ch)
            break;

    if (i == lenT)
        return 0;

    if (isPalindrome())
        return lenT-1;

    return lenT;
}

int main()
{
    cin >> T;
    lenT = T.length();
    cout << solve() << endl;

    return 0;
}
