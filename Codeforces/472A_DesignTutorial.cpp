#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6+7;
bool prime[MAX];

int main()
{
    int n;
    bool ans = false;
    int a, b;
    scanf("%d", &n);

    memset(prime, true, sizeof(prime));

    for(int i = 2; i < n; i++)
        if(prime[i])
            for(int j = i*2; j < n; j += i)
                prime[j] = false;

    for(int i = 4; i < n; i++)
    {
        if(!prime[i] && !prime[n-i])
        {
            a = i;
            b = n-i;
            break;
        }
    }
    printf("%d %d\n", a, b);

    return 0;
}
