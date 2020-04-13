#include <stdio.h>
#include <string.h>

int main()
{
//    freopen("input.txt", "r", stdin);
  //  freopen("output.txt", "w", stdout);
    int G, panjang, len;
    char kata[150];

    while(scanf("%d", &G) == 1)
    {
        if(G == 0)
            break;

        scanf("%s", kata);
        panjang = strlen(kata);
        len = panjang / G;

        for(int i = 0; i < panjang; i+=len)
        {
            for(int j = len-1+i; j >= i; j--)
            {
                printf("%c", kata[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
