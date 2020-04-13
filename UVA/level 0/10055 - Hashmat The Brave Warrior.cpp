#include <stdio.h>

int main()
{
 //   freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);

    long long int a, b, c;

    while(scanf("%lld %lld", &a, &b) == 2)
    {
        if(b > a)
            c = b - a;
        else
            c = a - b;
        printf("%lld\n", c);
    }

    return 0;
}
