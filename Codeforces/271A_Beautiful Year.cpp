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

int n, temp;
vector<int> digits;
bool flag;

int main()
{
    scanf("%d", &n);
    while(++n)
    {
        digits.clear();
        flag = false;
        temp = n;
        while(temp > 0)
        {
            if(find(digits.begin(), digits.end(), temp%10) != digits.end())
            {
                flag = true;
                break;
            }
            digits.push_back(temp%10);
            temp /= 10;
        }
        if(flag) continue;
        break;
    }
    printf("%d\n", n);

    return 0;
}
