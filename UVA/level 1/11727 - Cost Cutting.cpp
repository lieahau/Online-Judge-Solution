#include<stdio.h>

int main()
{
    int a,b,c,T;

    scanf("%d",&T);

        for(int i = 1; i<=T; i++)
            {
                scanf("%d %d %d",&a,&b,&c);

                if((a>b && a<c) ||(c<a && a<b) )
                {
                    printf("Case %d: %d\n",i,a);
                }
                if((b>a && b<c) ||(c<b && b<a))
                {
                    printf("Case %d: %d\n",i,b);
                }
                if((c>a && b>c) ||(c>b && a>c))
                {
                    printf("Case %d: %d\n",i,c);
                }

             }
return 0;
}
