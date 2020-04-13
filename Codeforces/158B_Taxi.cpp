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

int n, arr[100005], ans, counter;
bool visited[100005];

int main()
{
    ans = 0;
    memset(visited, false, sizeof(visited));
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sort(arr, arr+n);
    for(int i = n-1; i >= 0; i--)
    {
        if(!visited[i])
        {
            visited[i] = true;
            counter = arr[i];
            ans++;
            for(int j = 0; j < n; j++)
            {
                if(visited[j]) continue;
                if(counter+arr[j] > 4)
                    break;
                visited[j] = true;
                counter += arr[j];
            }
        }
    }
    printf("%d\n", ans);

    return 0;
}
