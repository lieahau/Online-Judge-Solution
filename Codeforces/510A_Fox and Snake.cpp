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

int row, col;

int main()
{
    scanf("%d %d", &row, &col);
    bool flag = false;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(i % 2 == 0) printf("#");
            else if(j == col-1 && !flag) printf("#");
            else if(j == 0 && flag) printf("#");
            else printf(".");
        }
        printf("\n");
        if(i % 2 == 1)
        {
            if(flag) flag = false;
            else flag = true;
        }
    }

    return 0;
}
