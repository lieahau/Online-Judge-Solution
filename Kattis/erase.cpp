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
char str1[2000], str2[2000];

int main()
{
    scanf("%d", &n);
    getchar();
    scanf("%s", str1);
    getchar();
    scanf("%s", str2);

    if(n%2) // jika ganjil, convert
    {
        int len = strlen(str1);
        for(int i = 0; i < len; i++)
            if(str1[i] == '0') str1[i] = '1';
            else str1[i] = '0';
    }
    if(strcmp(str1, str2) == 0)
        printf("Deletion succeeded\n");
    else
        printf("Deletion failed\n");

    return 0;
}
