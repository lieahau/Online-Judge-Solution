// 562

#include<bits/stdc++.h>

using namespace std;

int dp[25000+5];
int coin[100+5];

int knapSack(int N, int W)
{
    for(int i = 0; i <= W; i++)
        dp[i] = 0;

    for(int i = 1; i <= N; i++)
    {
        for(int j = W; j > 0; j--)
        {
            if(coin[i]<= j)
                dp[j] = max(dp[j], coin[i] + dp[j - coin[i]]);
        }
    }

    return dp[W];
}

int main()
{

    int tc, sum, n;
    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%d", &n);
        sum = 0;
        for(int i = 1; i <= n; i++)
        {
            scanf("%d", &coin[i]);
            sum += coin[i];
        }

        int ans = sum - 2*knapSack(n, sum/2);
        printf("%d\n", ans);
    }

    return 0;
}
