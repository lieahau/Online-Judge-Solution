#include <bits/stdc++.h>

using namespace std;

queue<int> q;
bool visited[100000];
int from[100000];
int jarak[100000];

int main()
{
    long long int start, target;
    cin >> start >> target;
    int button[] = {1, 2};

    q.push(start);
    visited[0] = true;
    jarak[0] = 0;

    while(!q.empty())
    {
        int current = q.front();
        q.pop();
        if(current * button[1] > 0 && current < target){
            int to = current * button[1];

            if(visited[to])
                continue;

            q.push(current * button[1]);
            from[current * button[1]] = current;
            visited[to] = true;
            jarak[to] = jarak[current] + 1;
        }
        if(current - button[0] > 0){
            int to = current - button[0];

            if(visited[to])
                continue;

            q.push(current - button[0]);
            from[current - button[0]] = current;
            visited[to] = true;
            jarak[to] = jarak[current] + 1;
        }

        if(visited[target]) break;
    }
    cout << jarak[target];

    return 0;
}
