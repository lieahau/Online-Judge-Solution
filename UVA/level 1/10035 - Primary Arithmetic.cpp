#include <stdio.h>

int main()
{
 //  freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
    int a, b, temp;

    while(scanf("%d %d", &a, &b) == 2)
    {
        if(a == 0 && b == 0)
            break;

        int hasil = 0;
        int bil1[20] = {0}, bil2[20] = {0};
        int i = 0;
        while(a > 9)
        {
            bil1[i] = a % 10;
            a = a / 10;
            i++;
        }
        bil1[i] = a;
        int j = 0;
        while(b > 9)
        {
            bil2[j] = b % 10;
            b = b / 10;
            j++;
        }
        bil2[j] = b;

        if(i > j)
            j = i;

        for(i = 0; i <= j; i++)
        {
            temp = bil1[i] + bil2[i];
            if(temp > 9)
            {
                bil1[i+1] += 1;
                hasil++;
            }
        }

        if(hasil == 0)
            printf("No carry operation.\n");
        else if(hasil == 1)
            printf("%d carry operation.\n", hasil);
        else
            printf("%d carry operations.\n", hasil);
    }

    return 0;
}
