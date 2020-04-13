#include <stdio.h>


int main()
{
   freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

    int n;
    int a, b;

            bool prima[1000000];
        for(int i = 0; i < 1000000; i++)
        prima[i] = true;

        prima[0] = false;
        prima[1] = false;
        prima[2] = false;

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
        bool finish = false;


        for(int cek = 3; cek < n; cek++)
        {
            if(prima[cek] == true)
            {
                a = cek;
                b = n - a;
                if(prima[b] == true)
                {
                    printf("%d = %d + %d\n", n, a, b);
                    finish = true;
                    break;
                }
            }
        }
        if(finish == false)
            printf("Goldbach's conjecture is wrong.\n");
    }

    return 0;
}
