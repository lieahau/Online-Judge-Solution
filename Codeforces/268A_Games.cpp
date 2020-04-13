#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;
    vector< pair <int, int> > uniform;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        uniform.push_back(make_pair(a, b));
    }

    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(i != j)
                if(uniform[i].first == uniform[j].second)
                    ans++;
    printf("%d\n", ans);

    return 0;
}
