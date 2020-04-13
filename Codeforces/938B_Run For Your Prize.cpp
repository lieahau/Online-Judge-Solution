#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, prize, me = 1, teman = 1e6, ans = 0, terdekat;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> prize;
        terdekat = min(prize-me, teman-prize);
        ans = max(ans, terdekat);
    }

    cout << ans;

    return 0;
}
