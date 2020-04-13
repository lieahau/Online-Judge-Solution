#include <stdio.h>


int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    int a, b;

    bool prima[1000000];
    bool sudah[1000000];

        for(int i = 0; i < 1000000; i++)
        prima[i] = true;

        prima[0] = false;
        prima[1] = false;

        for(int i = 2; i < 1000000; i++)
        {
            if(prima[i] == true)
            {
                for(int j = i*2; j < 1000000; j+=i)
                {
                    prima[j] = false;
                }
            }
        }

    while(scanf("%d", &n) == 1 && n != 0)
    {
        int hasil = 0;
        for(int cek = 2; cek < n; cek++)
        {
            if(prima[cek] == true)
            {
                a = cek;
                b = n - a;
                if(prima[b] == true)
                {
                    hasil = hasil + 1;
                    sudah[b] = true;
                    prima[b] = false;
                }
            }
        }
        printf("%d\n", hasil);
        for(int reset = 2; reset < n; reset++)
        {
            if(prima[reset] == false && sudah[reset] == true)
                prima[reset] = true;
                sudah[reset] = false;
        }
    }

    return 0;
}
