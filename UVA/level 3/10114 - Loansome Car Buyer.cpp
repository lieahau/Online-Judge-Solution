#include <stdio.h>

int main()
{
    int month, n;
    float downPay, cost;

    while (scanf("%d%f%f%d", &month, &downPay, &cost, &n) && month >= 0)
    {
        float depreciation[999] = {};
        for(int x = 0;n>x;n--)
        {
          int m;
          scanf("%d", &m);
          scanf("%f", &depreciation[m]);
        }

        float value = downPay + cost;
        float hutang = cost;
        float earn = cost / month;

        for (int i = 0; i <= month; i++)
        {
            if (depreciation[i]==0)
            {
                depreciation[i] = depreciation[i - 1];
            }

            value = value * (1 - depreciation[i]);
            if (value >= hutang)
            {
                printf("%d month", i);
                if(i!=1)
                {
                    printf("s\n");
                }
                else
                {
                    printf("\n");
                }
                break;
            }
            hutang = hutang - earn;
        }
    }
    return 0;
}
