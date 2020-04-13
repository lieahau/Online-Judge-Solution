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
    set<int> arr;
    int temp;
    for(int i = 0; i < 4; i++){
        scanf("%d", &temp);
        arr.insert(temp);
    }

    cout << 4 - arr.size() << endl;

    return 0;
}
