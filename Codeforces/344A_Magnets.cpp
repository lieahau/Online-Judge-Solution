#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans;
    string arr[100010];
    scanf("%d", &n); getchar();
    ans = 1;
    getline(cin, arr[0]);
    for(int i = 1; i < n; i++)
    {
        getline(cin, arr[i]);
        if(arr[i][0] == arr[i-1][1])
            ans++;
    }
    printf("%d\n", ans);

    return 0;
}
