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

int n, x;
char q[200];

int main()
{
    scanf("%d %d", &n, &x); getchar();
    for(int i = 0; i < n; i++)
        scanf("%c", &q[i]);

    while(x--)
    {
        for(int i = 0; i < n; i++)
        {
            if(q[i] < q[i+1])
            {
                swap(q[i], q[i+1]);
                i++;
            }
        }
    }
    printf("%s\n", q);

    return 0;
}
