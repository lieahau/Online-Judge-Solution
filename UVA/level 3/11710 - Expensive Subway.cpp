// Kruskal + Union Find Disjoint Set
#include <bits/stdc++.h>

using namespace std;

int p[405]; // var parent
vector<pair<int,pair<int,int> > > edgelist; // var edgelist

/* START UFDS */
void init(int v) // inisialisasi
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
     // freopen("input.txt", "r", stdin);
      //freopen("output.txt", "w", stdout);

    int v, e, w;
    map<string, int> CityMap; // syntax: map<tipe_data_1, tipe_data_2> nama_map;
    char city1[15], city2[15]; // var temp
    int v1, v2, mst, counter;
    bool ans;

    while(scanf("%d %d", &v, &e) == 2)
    {
        if(v == 0 && e == 0)
            break;

        edgelist.clear(); // clear edgelist

        for(int i = 0; i < v; i++)
        {
            scanf("%s", city1);
            CityMap[city1] = i; // syntax: nama_map[Value_tipe_data_1] = [Value_tipe_data_2];
        }

        for(int i = 0; i < e; i++)
        {
            scanf("%s %s %d", city1, city2, &w);
            v1 = CityMap[city1];
            v2 = CityMap[city2];
            edgelist.push_back(make_pair(w,make_pair(v1, v2)));
        }

        scanf("%s", city1);

        counter = 0;
        /* START KRUSKAL */
        sort(edgelist.begin(), edgelist.end());
        init(v); // inisialisasi
        mst = 0;

        for(int i = 0; i < e; i++)
        {
            if (!isSameSet(edgelist[i].second.first, edgelist[i].second.second))
            {
                mst += edgelist[i].first;
                unionSet(edgelist[i].second.first, edgelist[i].second.second);
                counter++;
            }
        }
        /* END KRUSKAL */

        if(counter == v-1)
            printf("%d\n", mst);
        else
            printf("Impossible\n");
    }

    return 0;
}
