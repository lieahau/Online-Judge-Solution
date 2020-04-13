#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int arr[200];

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sort(arr, arr+n);
    for(int i = 0; i < n; i++)
    {
        if(i) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}
