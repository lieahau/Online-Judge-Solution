#include <bits/stdc++.h>

using namespace std;

int main()
{
    int idxMax, idxMin;
    int maks = INT_MIN;
    int mins = INT_MAX;
    int n;
    int arr[200];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] > maks)
        {
            maks = arr[i];
            idxMax = i;
        }
        if(arr[i] <= mins)
        {
            mins = arr[i];
            idxMin = i;
        }
    }
    int ans;
    if(idxMax == 0 && idxMin == n-1)
        ans = 0;
    else
    {
        ans = idxMax + (n - idxMin - 1);
        if(idxMax > idxMin)
            ans--;
    }
    printf("%d\n", ans);

    return 0;
}
