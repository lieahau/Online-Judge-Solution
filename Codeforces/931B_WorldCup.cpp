#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int ronde;

    for(ronde = 0; (1 << ronde) < n; ronde++);

    int low = 0;
    int high = n;
    int mid = (low+high)/2;
    int maxronde = ronde;

    while(low < high)
    {
        if(mid >= min(a, b) && mid+1 <= max(a, b))
           break;

        if(mid >= a && mid >= b)
            high = mid;
        else if(mid <= a && mid <= b)
            low = mid;
        mid = (low+high) / 2;
        ronde--;
    }

    if(maxronde == ronde)
        cout << "Final!";
    else
        cout << ronde;

    return 0;
}
