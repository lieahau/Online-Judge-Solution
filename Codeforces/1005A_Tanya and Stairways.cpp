/*
    People who don't work hard
    don't have the right
    to be envious of the people with talent.
    People fail because
    they don't understand
    the hard work necessary to be successful.
*/

#include <bits/stdc++.h>

using namespace std;

int n, arr[1007], total;
vector<int> ans;

int main()
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] == 1) total++;
    }

    if(total == 1)
        ans.push_back(arr[n-1]);
    else
    {
        for(int i = 1; i < n; i++)
        {
            if(arr[i] == 1)
                ans.push_back(arr[i-1]);
        }
        ans.push_back(arr[n-1]);
    }

    printf("%d\n", total);
    for(int i = 0; i < total; i++)
    {
        if(i) printf(" ");
        printf("%d", ans[i]);
    }
    printf("\n");

    return 0;
}
