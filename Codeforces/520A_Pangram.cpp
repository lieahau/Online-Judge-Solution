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

int main()
{
    scanf("%d", &n);
    getchar();
    cin >> str;

    if(n < 26) printf("NO\n");
    else
    {
        bool flag[30];
        bool ans = false;
        int ctr = 0;
        memset(flag, false, sizeof(flag));
        for(int i = 0; i < n; i++)
        {
            int temp = tolower(str[i]) - 'a';
            if(!flag[temp]){
                flag[temp] = true;
                ctr++;
            }
        }
        if(ctr >= 26) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
