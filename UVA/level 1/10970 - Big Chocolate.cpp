#include <stdio.h>

int main()
{
    int M, N, hasil;

    while(scanf("%d %d", &M, &N) == 2)
    {
        hasil = (M*N) - 1;
        printf("%d\n", hasil);
    }

    return 0;
}
