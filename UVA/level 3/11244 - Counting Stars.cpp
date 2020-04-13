#include <bits/stdc++.h>

using namespace std;

char adjmat[500][500];
int notStars;

void dfs(int i, int j)
{
    notStars++;
    adjmat[i][j] = '.';
    if(adjmat[i-1][j-1] == '*')
    {
        dfs(i-1, j-1);
    }
    if(adjmat[i-1][j] == '*')
    {
        dfs(i-1, j);
    }
    if(adjmat[i-1][j+1] == '*')
    {
        dfs(i-1, j+1);
    }
    if(adjmat[i][j-1] == '*')
    {
        dfs(i, j-1);
    }
    if(adjmat[i][j+1] == '*')
    {
        dfs(i, j+1);
    }
    if(adjmat[i+1][j-1] == '*')
    {
        dfs(i+1, j-1);
    }
    if(adjmat[i+1][j] == '*')
    {
        dfs(i+1, j);
    }
    if(adjmat[i+1][j+1]== '*')
    {
        dfs(i+1, j+1);
    }
}

int main()
{
    int baris, kolom, stars, temp;

    while(scanf("%d %d", &baris, &kolom) == 2)
    {
        getchar();
        if(baris == 0 && kolom == 0)
            break;

        for(int i = 1; i <= baris; i++)
        {
            for(int j = 1; j <= kolom; j++)
            {
                scanf("%c", &adjmat[i][j]);
            }
            getchar();
        }

        stars = 0;
        notStars = 0;
        for(int i = 1; i <= baris; i++)
        {
            for(int j = 1; j <= kolom; j++)
            {
                if(adjmat[i][j] == '*')
                {
                    dfs(i,j);
                }
                if(notStars == 1)
                {
                    stars++;
                }
                notStars = 0;
            }
        }
        printf("%d\n", stars);
    }

    return 0;
}
