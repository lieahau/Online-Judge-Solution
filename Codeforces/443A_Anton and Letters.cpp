#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int len = str.length();
    int ans = 0;
    set<char> letters;

    for(int i = 0; i < len; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            letters.insert(str[i]);
    }
    cout << letters.size() << endl;

    return 0;
}
