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

const int MAX = 120007;
int arr[MAX], pangkat[100], n, ans;

int binser(int key)
{
    int low = 0;
    int high = n-1;

    while(low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid] > key)
            high = mid-1;
        else if(arr[mid] < key)
            low = mid+1;
        else
            return mid;

    }
    return -1;
}

int main()
{
    pangkat[1] = 2;
    for(int i = 2; i <= 30; i++)
        pangkat[i] = pangkat[i-1] * 2;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sort(arr, arr+n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= 30; j++)
        {
            if(pangkat[j] > arr[i])
            {
                int temp = binser(pangkat[j]-arr[i]);
                if(temp != -1)
                {
                   if(temp != i || (temp != 0 && arr[temp-1] == arr[temp]) ||
                        (temp != n-1 && arr[temp+1] == arr[temp]))
                    {
                        ans++;
                        break;
                    }
                }
            }
        }
    }

    printf("%d\n", n - ans);

    return 0;
}
