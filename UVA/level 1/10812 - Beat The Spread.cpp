#include <stdio.h>

int main()
{
    int n;
    long int s , d, kecil, besar;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%ld %ld", &s, &d);
        if( d > s || ( s - d) %2 != 0)
                printf("impossible\n");
        else
        {
            kecil = (s-d)/2;
            besar = kecil + d;
                printf("%ld %ld\n",besar,kecil);
        }


    }

    return 0;
}
