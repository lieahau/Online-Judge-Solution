#include <bits/stdc++.h>

using namespace std;

int n;
char adjmat[200 + 5] [200 + 5];
bool vis [200 + 5] [200 + 5];
char output;

void dfs (int x, int y, char curr)
{
    if ( x < 0 || y < 0 || x == n || y == n || adjmat[x][y] != curr || vis[x][y] )
        return;
    if ( y == n - 1 && adjmat[x][y] == 'w' )
    {
        output = 'W';
        return;
    }
/*    if ( x == n - 1 && adjmat[x][y] == 'b' )
    {
        output = 'B';
        return;
    } */

    vis[x][y] = true;

    int drow[] = {-1, -1, 0, 0, 1, 1};
    int dcol[] = {-1, 0, -1, 1, 0, 1};

    for ( int i = 0; i < 6; i++ )
        dfs(x + drow[i], y + dcol[i], curr);
}

int main()
{
    int cases = 0;

    while(scanf("%d", &n) && n)
    {
        for(int i = 0; i < n; i++ )
            scanf ("%s", adjmat[i]);

        memset(vis, false, sizeof(vis));

/*        for(int i = 0; i < n; i++)
            if(!vis[0][i] && adjmat[0][i] == 'b' )
                dfs (0, i, 'b');
*/
        output = 'B'; // mengurangi looping
        for(int i = 0; i < n; i++ )
            if(!vis[i][0] && adjmat[i][0] == 'w' )
                dfs (i, 0, 'w');

        printf ("%d %c\n", ++cases, output);
    }

    return 0;
}
