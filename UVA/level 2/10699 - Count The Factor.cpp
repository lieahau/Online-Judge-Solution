#include <stdio.h>

int main()
{
    bool prime[1000000];

    for(int i=0;i<1000000;i++)
        prime[i]=true;

    prime[0] = false;
    prime[1] = false;

    for(int i = 2; i < 1000000; i++)
    {
        if(prime[i] == true)
        {
            for(int j = i*2; j < 1000000; j+=i)
            {
                prime[j] = false;
            }
        }
    }

    int test;

    while(scanf("%d", &test) == 1 && test != 0)
    {
        int hitung = 1;
        int temp = test;
        for(int i = 2; i < test; i++)
        {
            if(prime[i] == true)
            {
                while(test % i == 0)
                {
                    test = test / i;
                    if(test % i != 0)
                        hitung++;
                }
            }
        }
        printf("%d : %d\n", temp, hitung);

    }

    return 0;
}
