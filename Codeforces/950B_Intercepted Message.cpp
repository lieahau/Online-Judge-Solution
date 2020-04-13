#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int x[n+5], y[m+5], rsqX[n+5], rsqY[m+5];

    cin >> x[0];
    rsqX[0] = x[0];
    for(int i = 1; i < n; i ++)
    {
        cin >> x[i];
        rsqX[i] = rsqX[i-1] + x[i];
    }

    cin >> y[0];
    rsqY[0] = y[0];
    for(int i = 1; i < m; i ++)
    {
        cin >> y[i];
        rsqY[i] = rsqY[i-1] + y[i];
    }

    int ans = 0;
    int curX = 0, curY = 0;
    while(curX < n && curY < m)
    {
        if(rsqX[curX] < rsqY[curY])
            curX++;
        else if(rsqX[curX] > rsqY[curY])
            curY++;
        else
        {
            curX++;
            curY++;
            ans++;
        }
    }
    cout << ans;

    return 0;
}
