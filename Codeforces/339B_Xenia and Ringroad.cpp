#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, task, cur = 1, ans = 0;
    cin >> n >> m;

    for(int i = 1; i <= m; i++)
    {
        cin >> task;

        if(cur < task)
            ans += (task-cur);
        else if(cur > task)
            ans += (n-cur) + task;

        cur = task;
    }
    cout << ans;

    return 0;
}
