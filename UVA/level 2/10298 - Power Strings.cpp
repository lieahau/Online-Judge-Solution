#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[1000005];
    int i;
    while(gets(s))
    {
        if(s[0] == '.')
            break;

        int len = strlen(s);
        int hasil;
        bool ans = true;

        for(i = 1; i < len-1; i++)
        {
            if(len%i != 0)
                continue;
            for(int j = i; j < len; j++)
            {
                if(s[j] != s[j%i])
                {
                    ans = false;
                    break;
                }
            }
            if(ans)
                break;
            ans = true;
        }
        printf("%d\n", len/i);
    }

    return 0;
}
