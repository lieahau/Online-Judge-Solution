#include <stdio.h>
#include <stack>
#include <string.h>

using namespace std;

int main()
{
//      freopen("input.txt", "r", stdin);
//      freopen("output.txt", "w", stdout);

    // membuat variable untuk inputan
    char kalimat[1000];

    while(gets(kalimat))
    {
        if(strcmp(kalimat,"DONE") == 0) break; // mengakhiri loop apabila inputan DONE

        int panjang = strlen(kalimat); // untuk penanda akhir loop
        stack<char> pembanding; // untuk membandingkan palindrome atau tidak

        for(int i = 0; i < panjang; i++)
        {
            if(kalimat[i] >= 'A' && kalimat[i] <= 'Z')
            {
                kalimat[i] = kalimat[i] + 32; // mengubah huruf besar menjadi huruf kecil melalui ascii
            }

            if(kalimat[i] >= 'a' && kalimat[i] <= 'z')
            {
                pembanding.push(kalimat[i]); // memasukkan nilai stack hanya huruf saja
            }
        }

        for(int j = 0; !pembanding.empty(); j++) // untuk membandingkan palindrome atau tidak
        {
            if(kalimat[j] >= 'a' && kalimat[j] <= 'z')
            {
                if(kalimat[j] == pembanding.top())
                {
                    pembanding.pop(); //mengeluarkan huruf teratas apabila sama dengan kalimatbaru[j]
                }
                else
                    break; //mengakhiri loop apabila ada minimal 1 huruf yg tidak palindrome
            }
        }

        // output akhir
        if(pembanding.empty())
            printf("You won't be eaten!\n"); // apabila variable stack nya empty
        else
            printf("Uh oh..\n"); // apabila variable stack nya tidak empty
    }

    return 0;
}
