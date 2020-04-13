#include <stdio.h>
#include <string.h>

int main()
{
    bool prime[100000];

     for(int i=0;i<100000;i++)
        prime[i]=true;

    prime[0] = false;
 //   prime[1] = false; 1 adalah prima berdasarkan yang diinginkan soal, fck WA gara" ini doang

    for(int i = 2; i < 100000; i++)
    {
        if(prime[i] == true)
        {
            for(int j = i*2; j < 100000; j+=i)
            {
                prime[j] = false;
            }
        }
    }

    char words[30];
    while(gets(words))
    {
        int total = 0;
        int panjang;

        panjang = strlen(words);
        for(int i = 0; i < panjang; i++)
        {
            if(words[i] >= 'a' && words[i] <='z') //mengubah nilai dari huruf ASCII
                total = total + (words[i]-96);
                else if(words[i] >= 'A' && words[i] <= 'Z')
                total = total + (words[i]-38);
        }

        if(prime[total] == true)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }


    return 0;
}
