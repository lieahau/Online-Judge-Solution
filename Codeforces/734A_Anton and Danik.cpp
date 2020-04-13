#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string str;
    scanf("%d", &n);
    getchar();
    cin >> str;

    int a = 0, d = 0;
    for(int i = 0; i < n; i++)
        if(str[i] == 'A') a++;
        else d++;

    if(a > d) printf("Anton\n");
    else if(d > a) printf("Danik\n");
    else printf("Friendship\n");

    return 0;
}
