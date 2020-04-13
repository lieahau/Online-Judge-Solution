#include <bits/stdc++.h>

using namespace std;

bool check(char c)
{
    return c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o' || c == 'y';
}

int main()
{
    int len;
    cin >> len;
    char s[len+10];
    scanf("%s", s);
    cout << s[0];
    for(int i = 1; i < len; i++)
        if(!check(s[i]) || !check(s[i-1]))
           printf("%c", s[i]);

    return 0;
}
