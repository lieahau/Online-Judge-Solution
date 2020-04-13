#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int parent[n+10], lv[n+10] = {0};

    parent[1] = 0;
    lv[1] = 1;

    for(int i = 2; i <= n; i++){
        cin >> parent[i];
        lv[i] = lv[parent[i]]+1;
    }
    sort(lv+1, lv+n+1);

    int ans = 1, temp = 0, before = lv[parent[1]];
    for(int i = 2; i <= n; i++)
    {
        if(before == lv[i]){
            temp++;
            if(i == n && temp % 2 == 1) ans++;
        }
        else{
            before = lv[i];
            if(temp % 2 == 1) ans++;
            temp = 1;
            if(i == n && temp % 2 == 1) ans++;
        }
    }
    cout << ans;

    return 0;
}
