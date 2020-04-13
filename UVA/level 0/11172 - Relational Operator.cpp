#include <stdio.h>

int main()
{
    int t, a, b;

    scanf("%d", &t);
    for(;t<15 && t>0;t--)
    {
        scanf("%d %d", &a, &b);
        if (a<b)
        {
            printf("<\n");
        }
        else if (a>b)
        {
            printf(">\n");
        }
        else if (a==b)
        {
            printf("=\n");
        }
    }
    return 0;
}
