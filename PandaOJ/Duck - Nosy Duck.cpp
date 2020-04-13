#include <stdio.h>
#include <algorithm>

using namespace std;

bool descending(int a, int b)
{

    return a > b;
}
int main()
{
    int T;
    int N;

    scanf("%d", &T);

    bool enter = false;
    for(int counter = 0; counter < T; counter++)
    {
        scanf("%d", &N);
        int i[N];
        for(int j = 0; j < N; j++)
        {
            scanf("%d", &i[j]);
        }
        sort(i,i+N, descending);
        for(int j = 0; j < N; j++)
        {
            printf("%d ", i[j]);
        }
        if(enter == false)
            {
                printf("\n");
                enter = true;
            }

    }

    return 0;
}
