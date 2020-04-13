#include <stdio.h>

int main()
{
    int loop;
    scanf("%d", &loop);

    if(loop > 36)
        printf("-1");
    else
    {
        while(loop >= 2)
        {
            printf("8");
            loop -= 2;
        }
        if(loop == 1)
            printf("6");
    }

    return 0;
}
