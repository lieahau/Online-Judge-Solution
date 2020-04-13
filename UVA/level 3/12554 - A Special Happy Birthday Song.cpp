#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>

int main()
{
//    freopen("file.in","r",stdin);
  //  freopen("file.out","w",stdout);

    char name[101][101];
    char ucapan[16][16]={"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    int n, i, j, f, k;
    scanf("%d",&n);
    j = 0;
    for(i=0; i<n; i++)
    {
        scanf("%s",name[i]);
    }
    if(n<16) f = 16;
    else if(n<32) f = 32;
    else if(n<48) f = 48;
    else if(n<64) f = 64;
    else if(n<80) f = 80;
    else if(n<96) f = 96;
    else f = 100;
    k=0;
    for(i=0 ; i<f; i++)
    {
        printf("%s: %s\n",name[j++], ucapan[k++]);
        if(j==n)  j = 0;
        if(k==16)  k = 0;
    }
    return 0;
}
