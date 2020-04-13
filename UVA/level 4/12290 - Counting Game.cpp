#include <stdio.h>

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    int n, m, k;
    int angka[100000];

    for(int i = 0; i < 100000; i++)
        angka[i] = i;

    while(scanf("%d %d %d", &n, &m, &k) == 3)
    {
        if(n == 0 && m == 0 && k == 0) break;
        int clap = 0;
        int person = 0;
        int index = 0;

        while(person < n)
        {
            index++;
            person++;

            if(person == m)
            {
                if(angka[index] % 7 == 0)
                    clap++;
                else
                {
                    int temp = angka[index];
                    while(temp!=0)
                    {
                        if(temp%10 == 7 || temp/10 == 7)
                        {
                            clap++;
                            break;
                        }
                        temp = temp / 10;
                    }
                }
            }

            if(clap == k)
            {
                printf("%d\n", angka[index]);
                break;
            }

            if(person == n)
            {
                while(person > 1)
                {
                    index++;
                    person--;

                    if(person == m)
                    {
                        if(angka[index] % 7 == 0)
                            clap++;
                        else
                        {
                            int temp = angka[index];
                            while(temp!=0)
                            {
                                if(temp%10 == 7 || temp/10 == 7)
                                {
                                    clap++;
                                    break;
                                }
                                temp = temp / 10;
                            }
                        }
                    }

                    if(clap == k)
                    {
                        printf("%d\n", angka[index]);
                        break;
                    }
                }
            }

            if(clap == k)
                break;
        }
    }

    return 0;
}
