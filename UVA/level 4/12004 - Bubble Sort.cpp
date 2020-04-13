#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc,n;

    scanf("%d",&tc);

    for(int i = 1;i <= tc; i++)
    {
        scanf("%d",&n);

        long long ans = (long long)n * (n-1);

        printf("Case %d: ", i);

        if(ans % 4 == 0)
            printf("%lld\n",ans / 4);
        else
            printf("%lld/2\n",ans / 2);
    }

    return 0;
}
