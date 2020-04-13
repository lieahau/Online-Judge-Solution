#include <stdio.h>

int main()
{
    int N, M, C[300][300];

    for(int i = 0; i <= 200; i++)
        C[0][i] = C[i][0] = 1;

    for(int i = 1; i <= 200; i++)
    {
        for(int j = 1; j <= 200; j++)
        {
            C[i][j] = C[i-1][j] + C[i][j-1];
        }
    }

    while(scanf("%d %d", &N, &M) == 2)
    {
        if(N == 0 && M == 0)
            break;

        printf("%d things taken %d at a time is %d exactly.\n", N, M, C[N-M][M]);
    }

    return 0;
}
