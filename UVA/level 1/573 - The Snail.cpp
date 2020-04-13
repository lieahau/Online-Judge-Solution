#include <stdio.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    float H, U, D, F;
    float fatigue;

    while(scanf("%f %f %f %f", &H, &U, &D, &F), H)
    {
        int day = 0;
        fatigue = U*F/100;
        for(double climb=0; climb < H;)
        {
            day++;
            climb = climb + U;
            if(climb > H)
            {
                printf("success on day %d\n", day);
                break;
            }

            climb = climb - D;
            if(climb < 0)
            {
                printf("failure on day %d\n", day);
                break;
            }
            U = U - fatigue;
            if (U < 0) U = 0;
        }
    }

    return 0;
}
