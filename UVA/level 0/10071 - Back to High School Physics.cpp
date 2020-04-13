#include <stdio.h>

int main()
{
    int v, t, ans;

    while(scanf("%d %d", &v, &t) == 2)
    {
        ans = v*t*2;
        printf("%d\n", ans);
    }

    return 0;
}
