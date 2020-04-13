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

int n, p, counter;
string str;

int main()
{
    scanf("%d %d", &n, &p); getchar();
    cin >> str;

    for(int i = 0; i < n; i++)
    {
        if(str[i] == '.')
        {
            str[i] = '0';
            if(str[i+p] == '0' && i+p < n || i-p >= 0 && str[i-p] == '0')
                str[i] = '1';
        }
        if(i+p < n && str[i+p] == str[i])
            counter++;
    }

    if(counter == n - p)
        printf("NO\n");
    else
        cout << str << endl;

    return 0;
}
