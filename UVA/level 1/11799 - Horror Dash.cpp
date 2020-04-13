#include<stdio.h>

int main()
{
    int i,t,a,b;
    char c;

    scanf("%d",&t);

        for(i=1;i<=t;i++)
        {
            b=0;
            while(1)
            {
                scanf("%d",&a);
                if(a>b)
                    b=a;
                scanf("%c",&c);
                if(c!=' ')
                break;
            }
        printf("Case %d: %d\n",i,b);
        }

    return 0;
}
