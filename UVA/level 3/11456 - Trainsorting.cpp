#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc, cars;

    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%d", &cars);
        int t[cars+5] = {0}, up[cars+5] = {0}, down[cars+5] = {0};

        for(int i = cars; i > 0; i--)
            scanf("%d", &t[i]);

        int ans = 0;
        for(int i = 1; i <= cars; i++)
        {
            for(int j = 1; j < i; j++)
            {
                if(t[i] > t[j])
                    up[i] = max(up[i], up[j]);
                if(t[i] < t[j])
                    down[i] = max(down[i], down[j]);
            }
            up[i]++;
            down[i]++;
            ans = max(ans, up[i]+down[i]-1);
        }

        printf("%d\n", ans);
    }

    return 0;
}
