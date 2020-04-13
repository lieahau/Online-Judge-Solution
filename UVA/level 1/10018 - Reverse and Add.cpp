#include <bits/stdc++.h>

using namespace std;

long long int Reverse(long long int x)
{
    long long int Xbaru = 0;

    while(x)
    {
        Xbaru *= 10;
        Xbaru += x % 10;
        x /= 10;
    }

    return Xbaru;
}

int main()
{
    int tc;

    scanf("%d", &tc);
    while(tc--)
    {
        long long int number;
        scanf("%lld", &number);

        long long int reverseNumber = Reverse(number);

        int iterasi = 0;

        while(reverseNumber != number)
        {
            number += reverseNumber;
            reverseNumber = Reverse(number);
            iterasi++;
        }
        printf("%d %lld\n", iterasi, number);
    }

    return 0;
}
