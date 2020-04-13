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

int matrix, x, y;

int main()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            scanf("%d", &matrix);
            if(matrix == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    printf("%d\n", abs(x - 3) + abs(y - 3));

    return 0;
}
