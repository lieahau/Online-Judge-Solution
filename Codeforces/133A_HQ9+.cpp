#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool ans = false;
    char s[1000];
    scanf("%s", s);
    int len = strlen(s);
    for(int i = 0; i < len; i++)
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            ans = true;
            break;
        }

    if(ans)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
