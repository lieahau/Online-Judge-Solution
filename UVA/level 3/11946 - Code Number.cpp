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
    int tc;
    char str[200];

    cin >> tc;
    getchar();
    while(tc--)
    {
        while(gets(str))
        {
            int len = strlen(str);
            if(len == 0) break;

            for(int i = 0; str[i] != '\0'; i++)
            {
                if(str[i] == '0')
                    cout << "O";
                else if(str[i] == '1')
                    cout << "I";
                else if(str[i] == '2')
                    cout << "Z";
                else if(str[i] == '3')
                    cout << "E";
                else if(str[i] == '4')
                    cout << "A";
                else if(str[i] == '5')
                    cout << "S";
                else if(str[i] == '6')
                    cout << "G";
                else if(str[i] == '7')
                    cout << "T";
                else if(str[i] == '8')
                    cout << "B";
                else if(str[i] == '9')
                    cout << "P";
                else
                    cout << str[i];
            }
            cout << endl;
        }

        if(tc != 0)
            cout << endl;
    }

    return 0;
}
