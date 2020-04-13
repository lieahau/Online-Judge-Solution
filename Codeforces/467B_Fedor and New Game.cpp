#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k, friends = 0, cnt, ans;

    cin >> n >> m >> k;
    int x[m+5];

    for(int i = 0; i < m+1; i++)
        cin >> x[i];

    for(int i = 0; i < m; i++)
    {
        cnt = 0;
        ans = x[m] ^ x[i];

        for(int j = 0; j < n; j++)
        {
            if(ans & (1 << j))
                cnt++;
            if(cnt > k)
                break;
        }
        if(cnt <= k)
            friends++;
    }
    cout << friends;


    return 0;
}
