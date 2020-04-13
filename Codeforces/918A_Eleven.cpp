#include <bits/stdc++.h>

using namespace std;

int main()
{
    int len;

    cin >> len;
    string s(len,'o');
    for(int i = 1, j = 1; i <= len; i+=j, j=i-j)
    {
        s[i-1]='O';
    }
    cout<<s;

    return 0;
}
