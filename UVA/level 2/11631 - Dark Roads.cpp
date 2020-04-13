// Kruskal + Union Find Disjoint Set
#include <bits/stdc++.h>

using namespace std;

// deklarasi global
int p[200005]; // var parent
vector<pair<int,pair<int,int> > > edgelist; // var edgelist

/* START UFDS */
void init(int v) // inisialisasi parent vertex = vertex itu sendiri
{
    for(int i = 0; i < v; i++)
        p[i] = i;
}

int findSet(int i) // cari parent
{
    if(p[i] == i)
        return i;
    else
        return p[i] = findSet(p[i]);
}

bool isSameSet(int i, int j) // return true jika parent i = parent j
{
    return findSet(i) == findSet(j);
}

void unionSet(int i, int j) // menghubungkan vertex parent
{
    if(!isSameSet(i, j))
        p[findSet(i)] = j;
}
/* END UFDS */

int main()
{
    int m, n, x, y, z, mst, totalCost;

    while(scanf("%d %d", &m, &n) == 2)
    {
        if(m == 0 && n == 0)
            break;

        edgelist.clear();
        totalCost = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d %d %d", &x, &y, &z);
            edgelist.push_back(make_pair(z, make_pair(x,y)));
            totalCost += z;
        }

        /* START KRUSKAL */
        sort(edgelist.begin(), edgelist.end());
        init(m); // inisialisasi
        mst = 0;

        for(int i = 0; i < n; i++)
        {
            if (!isSameSet(edgelist[i].second.first, edgelist[i].second.second))
            {
                mst += edgelist[i].first;
                unionSet(edgelist[i].second.first, edgelist[i].second.second);
            }
        }
        /* END KRUSKAL */

        printf("%d\n", totalCost-mst);
    }

    return 0;
}
