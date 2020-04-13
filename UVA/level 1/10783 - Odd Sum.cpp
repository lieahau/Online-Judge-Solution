#include <stdio.h>

int main()
{
//    freopen("input.txt", "r", stdin);
  //  freopen("output.txt", "w", stdout);

    int T, a, b, x, sum;
    scanf("%d", &T);

    for(int i = 0; i<T; i++)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        x = a;
        if(x%2==0) x++;
        if(b%2==0) b--;
        sum = x;
        for(; x < b; x+=2)
        {
            sum = sum + (x+2);
        }
        printf("Case %d: %d\n", i+1, sum);
    }

    return 0;
}
