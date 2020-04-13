#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;

    cin >> n >> a >> b;
    int ans = min(n-a, b+1);
    cout << ans;

    return 0;
}
