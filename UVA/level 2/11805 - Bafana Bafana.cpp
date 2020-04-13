#include <stdio.h>

int main()
{
    int T, N, K, P;

    scanf("%d", &T);

    for(int i = 0; i < T; i++)
    {
        int hasil = 0;

        scanf("%d %d %d", &N, &K, &P);
        hasil = K + P;

        while(hasil > N)
            hasil = hasil - N;

        printf("Case %d: %d\n", i+1, hasil);
    }

    return 0;
}
