#include <stdio.h>

int main()
{
    long long int tc, n, ans;

    scanf("%d", &tc);
    for(int i = 0; i < tc; i++)
    {
        scanf("%lld", &n);
        ans = n;
        ans *= 567;
        ans /= 9;
        ans += 7492;
        ans *= 235;
        ans /= 47;
        ans -= 498;

        ans = ans % 100;
        ans /= 10;

        if(ans < 0)
            ans *= -1;

        printf("%lld\n", ans);
    }

    return 0;
}
