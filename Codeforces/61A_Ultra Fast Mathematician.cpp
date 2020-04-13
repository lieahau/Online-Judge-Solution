#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);

    int len = a.length();
    for(int i = 0; i < len; i++)
    {
        if(a[i] != b[i])
            printf("1");
        else
            printf("0");
    }
    printf("\n");

    return 0;
}
