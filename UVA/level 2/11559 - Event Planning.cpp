#include <stdio.h>

int main()
{
// freopen("file.in", "r", stdin);
 // freopen("file.out", "w", stdout);

    int N,B,H,W,p,c,d,x, murah;

       murah = 200000001;
    while(scanf("%d %d %d %d",&N,&B,&H,&W) == 4)
    {

            for(int i = 0;i < H;i++)
            {
                scanf("%d",&p);
                d = 0;

                for(int j = 0;j < W;j++)
                {
                    scanf("%d",&x);

                    if(x >= N)
                    {
                        c = N * p;
                        if(c<murah)
                            murah=c;
                    }
                }
            }

            if(murah > B)
            {
                printf("stay home\n");
            }
            else
            {
                printf("%d\n",murah);
            }
                  murah = 200000001;
    }

    return 0;
}
