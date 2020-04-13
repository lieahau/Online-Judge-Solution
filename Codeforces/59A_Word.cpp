#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int len = str.length();
    int lower = 0, upper = 0;

    for(int i = 0; i < len; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            lower++;
        else
            upper++;
    }

    if(lower >= upper)
    {
        for(int i = 0; i < len; i++)
            printf("%c", tolower(str[i]));
    }
    else
        for(int i = 0; i < len; i++)
            printf("%c", toupper(str[i]));

    printf("\n");

    return 0;
}
