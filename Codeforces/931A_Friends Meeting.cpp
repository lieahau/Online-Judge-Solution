#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, meet;
    long long ans1 = 0, ans2 = 0;

    cin >> a >> b;
    if((max(a, b) - min(a, b)) % 2 == 0)
        meet = ((max(a, b) - min(a, b)) / 2) + min(a, b);
    else
        meet = ((max(a, b) - min(a, b)) / 2)+1 + min(a, b);

    if(a < meet)
        ans1 = (meet-a) * (2 + (meet-a-1)) / 2;
    else if(a > meet)
        ans1 = (a-meet) * (2 + (a-meet-1)) / 2;
    if(b < meet)
        ans2 = (meet-b) * (2 + (meet-b-1)) / 2;
    else if(b > meet)
        ans2 = (b-meet) * (2 + (b-meet-1)) / 2;

    cout << ans1+ans2;

    return 0;
}
