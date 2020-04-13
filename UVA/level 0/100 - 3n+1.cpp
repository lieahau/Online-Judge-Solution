#include <stdio.h>

int main()
{
    int i, j;

    while(scanf("%d %d", &i, &j) == 2)
    {
        printf("%d %d ", i, j);

        int cycle, max_cycle = 0;
        int temp;
        if(i > j)
        {
            temp = i;
            i = j;
            j = temp;
        }

        while(i <= j)
        {
            int n = i;
            cycle = 1;
            while(n!=1)
            {
                if(n%2 != 0)
                    n = (3*n) + 1;
                else
                    n = n /2;
                cycle++;
            }
            if(cycle > max_cycle)
                max_cycle = cycle;
            i++;
        }
        printf("%d\n", max_cycle);
    }

    return 0;
}
