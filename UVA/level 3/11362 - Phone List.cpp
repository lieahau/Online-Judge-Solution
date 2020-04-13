/*
    People who don't work hard
    don't have the right
    to be envious of the people with talent.
    People fail because
    they don't understand
    the hard work necessary to be successful.
*/
// https://www.geeksforgeeks.org/pattern-searching-set-7-boyer-moore-algorithm-bad-character-heuristic/

#include <bits/stdc++.h>

using namespace std;

int tc, n;
char str[10005][20];
bool found;

void badCharHeuristic(char *str, int size, int badchar[255])
{
    for(int i = 0; i < 255; i++)
        badchar[i] = -1;
    for(int i = 0; i < size; i++)
        badchar[(int)str[i]] = i;
}

bool boyerSearch(char *text, char *pattern)
{
    int n = strlen(text);
    int m = strlen(pattern);

    int badchar[255];
    badCharHeuristic(pattern, m, badchar);

    int s = 0;

    while(s <= (n-m))
    {
        int j = m-1;
        while(j >= 0 && pattern[j] == text[s+j]) j--;
        if(j < 0) return true;
        else s += max(1, j - badchar[text[s+j]]);
    }
    return false;
}

int main()
{
    scanf("%d", &tc);

    for(int t = 1; t <= tc; t++)
    {
        found = false;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            getchar();
            scanf("%s", str[i]);
        }

        for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(strlen(str[i]) < strlen(str[j]))
                    found = boyerSearch(str[j], str[i]);
                else
                    found = boyerSearch(str[i], str[j]);

                if(found) break;
            }
            if(found) break;
        }
        if(found) printf("NO\n");
        else printf("YES\n");
    }

    return 0;
}
