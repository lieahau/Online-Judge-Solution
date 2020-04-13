#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, genap = 0, ganjil = 0, idxgenap, idxganjil;
    scanf("%d", &n);
    int temp;
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &temp);
        if(temp%2){
            ganjil++;
            idxganjil = i;
        }
        else{
            genap++;
            idxgenap = i;
        }
    }
    if(genap == 1)
        printf("%d\n", idxgenap);
    else
        printf("%d\n", idxganjil);

    return 0;
}
