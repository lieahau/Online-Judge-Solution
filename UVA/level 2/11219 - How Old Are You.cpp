#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    int curday, curmonth, curyear;
    int birthday, birthmonth, birthyear;

    scanf("%d", &tc);
    for(int i = 1; i <= tc; i++)
    {
        scanf("%d/%d/%d", &curday, &curmonth, &curyear);
        scanf("%d/%d/%d", &birthday, &birthmonth, &birthyear);

        int ans = curyear - birthyear;

        if(curmonth < birthmonth)
            ans--;
        else if(curmonth == birthmonth)
        {
            if(curday < birthday)
                ans--;
        }

        printf("Case #%d: ", i);
        if(ans < 0)
            printf("Invalid birth date\n");
        else if(ans > 130)
            printf("Check birth date\n");
        else
            printf("%d\n", ans);
    }
    return 0;
}
