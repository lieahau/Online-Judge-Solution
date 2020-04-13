#include <stdio.h>
#include <string.h>

int main()
{
    int tc = 0;
    char arr[100];

    scanf("%s", arr);

    while(strcmp(arr, "#") != 0)
    {
        tc++;
        if(strcmp(arr, "HELLO") == 0)
            printf("Case %d: ENGLISH\n", tc);
        else if(strcmp(arr, "HOLA") == 0)
            printf("Case %d: SPANISH\n", tc);
        else if(strcmp(arr, "HALLO") == 0)
            printf("Case %d: GERMAN\n", tc);
        else if(strcmp(arr, "BONJOUR") == 0)
            printf("Case %d: FRENCH\n", tc);
        else if(strcmp(arr, "CIAO") == 0)
            printf("Case %d: ITALIAN\n", tc);
        else if(strcmp(arr, "ZDRAVSTVUJTE") == 0)
            printf("Case %d: RUSSIAN\n", tc);
        else
            printf("Case %d: UNKNOWN\n", tc);

        scanf("%s", arr);
    }


    return 0;
}
