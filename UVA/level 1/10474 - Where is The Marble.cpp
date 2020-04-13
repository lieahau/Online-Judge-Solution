#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q, num[10000], query, low, mid, high, k = 1;

    while(scanf("%d %d", &n, &q) == 2)
    {
        if(n == 0 && q == 0)
            break;

        printf("CASE# %d:\n", k++);

        high = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &num[i]);
        }
        sort(num, num+n);

        for(int i = 0; i < q; i++)
        {
            bool ans = false;
            int hasil = 99999;
            scanf("%d", &query);

            low = 0;
            high = n;
            while(low <= high)
            {
                mid = (low+high) / 2;
                if(num[mid] > query)
                    high = mid-1;
                else if(num[mid] < query)
                    low = mid+1;
                else if(num[mid] == query)
                {
                    if(mid < hasil)
                        hasil = mid;
                    ans = true;
                    high = mid-1;
                }
            }
            if(ans)
                printf("%d found at %d\n", query, hasil+1);
            else
                printf("%d not found\n", query);
        }
    }

    return 0;
}
