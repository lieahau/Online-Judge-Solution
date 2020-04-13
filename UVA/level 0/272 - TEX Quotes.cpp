#include <stdio.h>
#include <string.h>

int main()
{
    int hitung = 0;
    char quotes[100000];
    while(gets(quotes))
    {
        int panjang = strlen(quotes);
        for(int i = 0; i< panjang;i++)
        {
            if(quotes[i]=='"')
            {
                hitung=hitung+1;
                if(hitung%2==1)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c",quotes[i]);
        }
        printf("\n");
    }

    return 0;
}
