#include <bits/stdc++.h>

using namespace std;

int n, m, c[1005];

bool simulasi(int cap)
{
    int total = 0, current = 0;
    for(int i = 0; i < n; i++)
    {
        if(c[i] > cap)
            return false;
        if(current + c[i] > cap)
            current = 0;
        if(current == 0)
            total++;

        current += c[i];

        if(total > m)
            return false;
    }

    return true;
}

int main()
{
    while(scanf("%d %d", &n, &m) == 2)
    {
        for(int i = 0; i < n; i++)
            scanf("%d", &c[i]);

        int high = 1000001, low = 0;
        while(high - low > 0)
        {
            if(simulasi(high))
            {
                high = low + (high - low) / 2;
            }
            else
            {
                low = high;
                high = high + high / 2;
            }
        }

        printf("%d\n", high + 1);
    }

    return 0;
}
