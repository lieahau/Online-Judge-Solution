#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, ans = 0;
    scanf("%d", &x);

    while(x > 0)
    {
        int i = 1;

        while(i <= x)
            i = i << 1;
        if(i != x)
            i = i >> 1;
        x -= i;
        ans++;
    }
    cout << ans;

    return 0;
}
