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

int arr[200];
char temp;

int main()
{
    int i;
    for(i = 0;; i++)
    {
        scanf("%d%c", &arr[i], &temp);
        if(temp == '\n') break;
    }
    i++;
    sort(arr, arr+i);
    printf("%d", arr[0]);
    for(int j = 1; j < i; j++)
        printf("+%d", arr[j]);
    printf("\n");

    return 0;
}
