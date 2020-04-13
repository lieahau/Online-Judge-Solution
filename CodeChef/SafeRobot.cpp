// Kode Soal = ROBOTG
#include <stdio.h>
#include <string.h>

int main()
{
    int tc, row, column, length;
    char command[15];
    int LR, UD;
    bool safe, unsafe;
    int robot;

    scanf("%d", &tc);

    for(int i = 0; i < tc; i++)
    {
        safe = false;
        robot = 1;

        scanf("%d %d", &row, &column);
        scanf("%s", command);

        length = strlen(command);

            for(int x = 1; x <= row; x++)
            {
                for(int y = 1; y <= column; y++)
                {
                    unsafe = false;
                    UD = x;
                    LR = y;

                    for(int j = 0; j < length; j++)
                    {
                        if(command[j] == 'L')
                        {
                            LR = LR - 1;
                        }
                        else if(command[j] == 'R')
                        {
                            LR = LR + 1;
                        }
                        else if(command[j] == 'U')
                        {
                            UD = UD + 1;
                        }
                        else if(command[j] == 'D')
                        {
                            UD = UD - 1;
                        }

                        if(LR <= 0 || LR > column || UD <= 0 || UD > row)
                        {
                            unsafe = true;
                            break;
                        }
                    }
                    if(LR > 0 && LR <= column && UD > 0 && UD <= row && unsafe == false)
                    {
                        safe = true;
                        break;
                    }
                }
                if(safe == true)
                    break;
            }
        if(safe == true)
            printf("safe\n");
        else
            printf("unsafe\n");

    }


    return 0;
}
