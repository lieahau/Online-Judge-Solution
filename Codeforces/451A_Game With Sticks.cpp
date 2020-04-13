#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    n = min(n, m);
    if((n % 2 == 1)) printf("Akshat\n");
    else printf("Malvika\n");

    return 0;
}
