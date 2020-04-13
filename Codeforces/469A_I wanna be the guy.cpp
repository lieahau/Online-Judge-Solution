#include <bits/stdc++.h>

using namespace std;

bool arr[200];
int main()
{
    int n, x, y, temp, ans = 0;

    scanf("%d", &n);
    scanf("%d", &x);
    for(int i = 0; i < x; i++)
    {
        scanf("%d", &temp);
        if(!arr[temp]){
            arr[temp] = true;
            ans++;
        }
    }
    scanf("%d", &y);
    for(int i = 0; i < y; i++)
    {
        scanf("%d", &temp);
        if(!arr[temp]){
            arr[temp] = true;
            ans++;
        }
    }

    if(ans == n)
        printf("I become the guy.\n");
    else
        printf("Oh, my keyboard!\n");

    return 0;
}
