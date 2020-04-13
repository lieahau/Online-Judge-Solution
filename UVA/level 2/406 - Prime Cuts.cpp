#include <bits/stdc++.h>
#define MAX 1005

using namespace std;

int PrimeArray[MAX];
int numbers[MAX];

void sieve()
{

    for(int i = 4 ; i < MAX ; i += 2)
    {
        numbers[i] = 1;
    }

    PrimeArray[0] = 1;
    PrimeArray[1] = 2;

    int counter = 2;

    for(int i = 3 ; i <= MAX ; i++)
    {
        if(numbers[i] == 0)
        {
            PrimeArray[counter++] = i;
            for(int j = i*i ; j < MAX  && j > 0; j+= i*2)
            {
                numbers[j] = 1;
            }
        }
    }
}

int main()
{
    int N, C;

    sieve();

    while(scanf("%d %d", &N, &C) == 2)
    {
        int primeCount = 0;
        int tempN = N;

        N = min(N, 1000);

        for(int i=0; ; i++)
        {
            if(PrimeArray[i] > N)
                break;
            primeCount++;
        }

        int lowLimit, highLimit;

        if(primeCount%2 == 0)
        {
            lowLimit = primeCount/2 - C;
            highLimit = lowLimit + 2 * C;
        }
        else
        {
            lowLimit = primeCount/2 - C + 1;
            highLimit = lowLimit + 2 * C - 1;
        }

        lowLimit = max(lowLimit, 0);

        highLimit = highLimit > primeCount - 1 ? primeCount : highLimit;

        printf("%d %d:", tempN, C);
        for(int i = lowLimit; i < highLimit; i++)
        {
            printf(" %d", PrimeArray[i]);
        }
        printf("\n\n");
    }

    return 0;
}
