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
    int n, k, p1, p2, counter;
    char m1[100], m2[100];

    while(1)
    {
        scanf("%d", &n);
        if(!n) break;
        scanf("%d", &k);
        int win[200] = {0}, lose[200] = {0};

        counter = k*n*(n-1)/2;
        for(int i = 0; i < counter; i++)
        {
            scanf("%d %s %d %s", &p1, m1, &p2, m2);
            p1--;
            p2--;

            if(strcmp(m1, "rock") == 0)
            {
                if(strcmp(m2, "paper") == 0)
                {
                    win[p2]++;
                    lose[p1]++;
                }
                else if(strcmp(m2, "scissors") == 0)
                {
                    win[p1]++;
                    lose[p2]++;
                }
            }
            else if(strcmp(m1, "paper") == 0)
            {
                if(strcmp(m2, "scissors") == 0)
                {
                    win[p2]++;
                    lose[p1]++;
                }
                else if(strcmp(m2, "rock") == 0)
                {
                    win[p1]++;
                    lose[p2]++;
                }
            }
            else if(strcmp(m1, "scissors") == 0)
            {
                if(strcmp(m2, "rock") == 0)
                {
                    win[p2]++;
                    lose[p1]++;
                }
                else if(strcmp(m2, "paper") == 0)
                {
                    win[p1]++;
                    lose[p2]++;
                }
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(win[i] == 0 && lose[i] == 0)
            {
                printf("-\n");
            }
            else
            {
                double ans = ((double)win[i])/(win[i]+lose[i]);
                printf("%.3f\n", ans);
            }
        }
        printf("\n");
    }

    return 0;
}
