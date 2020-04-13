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

string T, ans;

int main()
{
    cin >> T;
    ans = "";
    int lenT = T.length();
    int pos;
    bool flag = false;
    bool space = false;

    if(lenT <= 2)
        cout << T << endl;
    else
    {
        for(int i = 0; i < lenT-2; i++)
        {
            if(T.substr(i, 3) == "WUB")
            {
                i += 2;
                if(space) flag = true;
            }
            else
            {
                if(space && flag) ans += " ";
                ans += T[i];
                flag = false;
                space = true;
            }
            pos = i;
        }
        if(flag && pos != lenT-1) ans += " ";
        for(int i = pos+1; i < lenT; i++)
            ans += T[i];
        cout << ans << endl;
    }

    return 0;
}
