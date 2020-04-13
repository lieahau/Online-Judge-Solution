#include <bits/stdc++.h>

using namespace std;

bool ans;
int num, n, temp;

int main()
{
    scanf("%d", &n);
    ans = false;
    for(int i = 4; i <= n; i++)
    {
        num = i;
        while(n > 0)
        {
            temp = num % 10;
            if(temp != 4 && temp != 7) break;
            num /= 10;
        }
        if(num == 0 && n % i == 0)
        {
            ans = true;
            break;
        }
    }
    if(ans) printf("YES\n");
    else printf("NO\n");

    return 0;
}
