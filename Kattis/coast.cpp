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

int n, m;
long long int ans;
char island[1010][1010];
bool visited[1010][1010];

void dfs(int i, int j, char border, char asli)
{
    if(i < 0 || i > n+1 || j < 0 || j > m+1 || visited[i][j])
        return;

    visited[i][j] = true;
    if(island[i][j] == asli){
        island[i][j] = border;
        dfs(i-1, j, border, asli); // atas
        dfs(i+1, j, border, asli); // bawahh
        dfs(i, j-1, border, asli); // kiri
        dfs(i, j+1, border, asli); // kanan
    }
}

int main()
{
    scanf("%d %d", &n, &m);

    /* Add additional border buat tepi nya dan dianggap sebagai sea (0) */
    for(int i = 0; i < n+2; i++)
    {
        island[i][0] = '0';
        island[i][m+1] = '0';
    }

    for(int i = 0; i < m+2; i++)
    {
        island[0][i] = '0';
        island[n+1][i] = '0';
    }

    for(int i = 1; i <= n; i++)
    {
        getchar();
        for(int j = 1; j <= m; j++)
            scanf("%c", &island[i][j]);

        island[i][m+3] = '\0';
    }

    dfs(0, 0, '*', '0'); // anggep '*' sebagai simbol border nya

    for(int i = 1; i < n+1; i++)
    {
        for(int j = 1; j < m+1; j++)
        {
            if(island[i][j] == '1')
            {
                if(island[i-1][j] == '*') ans++; // atas
                if(island[i+1][j] == '*') ans++; // bawah
                if(island[i][j-1] == '*') ans++; // kiri
                if(island[i][j+1] == '*') ans++; // kanan
            }
        }
    }
    printf("%lld", ans);

    return 0;
}
