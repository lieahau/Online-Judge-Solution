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
    string str;
    cin >> str;

    stack<char> ansReverse;
    int len = str.length();
    for(int i = 0; i < len; i++)
    {
        if(str[i] == '<')
            ansReverse.pop();
        else
            ansReverse.push(str[i]);
    }

    stack<char> ans;
    while(!ansReverse.empty())
    {
        ans.push(ansReverse.top());
        ansReverse.pop();
    }

    while(!ans.empty())
    {
        printf("%c", ans.top());
        ans.pop();
    }
    printf("\n");

    return 0;
}
