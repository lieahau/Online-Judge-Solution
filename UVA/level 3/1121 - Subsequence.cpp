// Sliding Window

#include <stdio.h>

int main()
{
    int n, arr[100], batas, temp, var = 99999;

    scanf("%d %d", &n, &batas);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

/* cara lama O(n^2)
    for(int i = 0; i < n; i++)
    {
        int sum = 0;

        for(int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            if(sum >= batas)
            {
                temp = j - i + 1;
                if(temp < var) var = temp;
                    break;
            }
        }
    }
*/

// Sliding window O(n)

    int sum = 0;
    int i = 0;

    for(int j = 0; j < n; j++)
    {
        sum = sum + arr[j];
        while(sum >= batas)
        {
            sum = sum - arr[i];
            i++;
        }

        if(sum += arr[i-1] >= batas)
        {
            temp = j - i + 2;
            if(temp < var) var = temp;
        }

    }


    printf("%d", var);

    return 0;
}
