#include <stdio.h>

int main()
{
    int C, N;
    float avg_nilai, avg;

    scanf("%d", &C);

    for(int i = 0; i < C; i++)
    {
        scanf("%d", &N);
        int nilai[N];
        for(int j = 0; j < N; j++)
        {
            scanf("%d", &nilai[j]);
        }

        avg_nilai = 0;
        for(int avg_counter = 0; avg_counter < N; avg_counter++)
        {
            avg_nilai = avg_nilai + nilai[avg_counter];
        }
        avg_nilai = avg_nilai / N;

        float banyak = 0;
        for(int cek = 0; cek < N; cek++)
        {
            if(nilai[cek] > avg_nilai) banyak++;
        }
        avg = banyak*100/N;
        printf("%.3f%%\n", avg);
    }

    return 0;
}
