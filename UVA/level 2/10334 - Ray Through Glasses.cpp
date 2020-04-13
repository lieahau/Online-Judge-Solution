#include<stdio.h>

int fibo[5001][1002];

void fibonacci()
{
    fibo[0][0] = 0;
    fibo[2][0] = 1;
    fibo[1][0] = 1;


    for(int i = 3; i<5001; i++)
    {
        for(int j = 0; j<1002; j++)
        {

            fibo[i][j] += fibo[i-2][j] + fibo[i-1][j];

            if(fibo[i][j]>=10)
            {
                fibo[i][j+1] += fibo[i][j]/10;
                fibo[i][j] %= 10;
            }
        }
    }
}

int main()
{
    int n, i, j;

    fibonacci();

    while(scanf("%d",&n)==1)
    {
        n = n + 2;
        for(i = 1001; i>0; i--)
        {
            if(fibo[n][i] != 0)
                break;
        }

        for(; i >= 0 ; i--)
            printf("%d", fibo[n][i]);
        printf("\n");
    }

    return 0;
}
