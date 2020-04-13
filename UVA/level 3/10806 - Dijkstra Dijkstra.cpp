#include <bits/stdc++.h>

using namespace std;

int vertex, edge, adjMat[200][200];
long long int ans;
const int MAX = 1e6;
bool flag;

int minDistance(int dist[], bool visited[])
{
    int mins = INT_MAX, min_index;
    for(int i = 0; i < vertex; i++)
    {
        if(!visited[i] && dist[i] <= mins)
        {
            mins = dist[i];
            min_index = i;
        }
    }
    return min_index;
}

void erasePath(int path[], int i)
{
    if(path[i] == -1) // base case: jika i adalah source
        return;
    adjMat[i][path[i]] = 0;
    adjMat[path[i]][i] = 0;
    erasePath(path, path[i]);
}

void dijkstra(int src, int dest)
{
    int dist[vertex+10];
    bool visited[vertex+10] = {false};
    int path[vertex+10] = {0};

    memset(dist, MAX, sizeof(dist));
    path[src] = -1;
    dist[src] = 0;

    for(int i = 0; i < vertex-1; i++)
    {
        int u = minDistance(dist, visited);
        visited[u] = true;

        for(int v = 0; v < vertex; v++)
        {
            if(!visited[v] && adjMat[u][v] && dist[u] + adjMat[u][v] < dist[v])
            {
                path[v] = u;
                dist[v] = dist[u] + adjMat[u][v];
            }
        }
    }

    if(dist[dest] < MAX)
    {
        ans += dist[dest];
        flag = true;
    }

    // ilangin adjMat yg udah dilewatin
    if(flag && dest != 0)
        erasePath(path, dest);
    else
        return;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    while(scanf("%d", &vertex) == 1)
    {
        if(vertex == 0) break;
        for(int i = 0; i < vertex; i++)
            memset(adjMat[i], 0, sizeof(adjMat[i]));
        scanf("%d", &edge);

        int source, destination, cost;
        for(int i = 0; i < edge; i++)
        {
            scanf("%d %d %d", &source, &destination, &cost);
            source--;
            destination--;
            adjMat[source][destination] = adjMat[destination][source] = cost;
        }

        ans = 0;
        flag = false;
        source = 0;
        destination = vertex-1;
        dijkstra(source, destination);
        if(flag)
        {
            flag = false;
            source = vertex-1;
            destination = 0;
            dijkstra(source, destination);
        }
        if(flag)
            printf("%lld\n", ans);
        else
            printf("Back to jail\n");
    }


    return 0;
}
