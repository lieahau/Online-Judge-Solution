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

int n, x, y, z, ansX, ansY, ansZ;

int main()
{
    scanf("%d", &n);
    ansX = ansY = ansZ = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        ansX += x;
        ansY += y;
        ansZ += z;
    }

    if(ansX == 0 && ansY == 0 && ansZ == 0)
        printf("YES\n");
    else printf("NO\n");


    return 0;
}
