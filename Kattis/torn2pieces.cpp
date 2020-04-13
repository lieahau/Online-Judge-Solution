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

int main()
{
    int n;
    string asal, tujuan;
    map<string, vector<string> > adjList;

    scanf("%d", &n);
    getchar();

    for(int i = 0; i < n; i++)
    {
        cin >> asal;

        while(1){
            cin >> tujuan;
            char temp = getchar();
            adjList[asal].push_back(tujuan);
            adjList[tujuan].push_back(asal);
            if(temp == '\n') break;
        }
    }

    cin >> asal >> tujuan;

    // bfs
    map<string, string> path;
    queue<string> q;
    q.push(asal);
    path[asal] = "kotaasal"; // untuk penanda
    while(!q.empty())
    {
        string current = q.front();
        q.pop();

        int counter = adjList[current].size();
        for(int i = 0; i < counter; i++)
        {
            if(!path.count(adjList[current][i])) // cek key it nya ada ga
            {
                path[adjList[current][i]] = current;
                q.push(adjList[current][i]);
            }
        }
    }

    if(!path.count(tujuan)) // kalo tujuannya ga ada di path
        printf("no route found");
    else
    {
        vector<string> ans;
        string current = tujuan;

        while(current != "kotaasal") // traverse dari tujuan ke kota asal
        {
            ans.push_back(current);
            current = path[current];
        }

        int counter = ans.size()-1;
        for(int i = counter; i >= 0; i--)
            cout << ans[i] << " ";
    }
    printf("\n");

    return 0;
}
