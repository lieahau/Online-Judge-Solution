#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc, n, iq;
    int result;

    scanf("%d", &tc);

    while (tc--)
    {
        int best = -999999;
        result = -999999;

        scanf("%d", &n);

        while(n--)
        {
            scanf("%d", &iq);

            if(best - iq > result)
                result = best - iq;

            if(iq > best)
                best = iq;
        }

        printf("%d\n", result);
    }

    return 0;
}
