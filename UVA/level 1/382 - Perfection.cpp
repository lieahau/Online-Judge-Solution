#include <stdio.h>

int main()
{
    int n, sum;

    printf("PERFECTION OUTPUT\n");
    while(scanf("%d", &n) == 1)
    {
        sum = 0;
        if(n == 0)
        {
            printf("END OF OUTPUT\n");
            break;
        }

        for(int i = 1; i < n; i++)
        {
			if (n % i == 0)
				sum += i;
			if (sum > n)
				break;
		}

		printf("%5d  ", n);
		if(sum == n)
            printf("PERFECT\n");
        else if(sum > n)
            printf("ABUNDANT\n");
        else
            printf("DEFICIENT\n");
    }

    return 0;
}
