#include <stdio.h>

int Find(int x, int parent[])
{
    if(parent[x]!=x)
        parent[x] = Find(parent[x], parent);
    return parent[x];
}

void Union(int A, int B, int parent[], int rank[], int merge[], int *hasil)
{
    int PA = Find(A, parent), PB = Find(B, parent);
    if(PA==PB)
        return;

    if(rank[PA]>rank[PB])
    {
        parent[PB]=PA;
        merge[PA] += merge[PB];

        if(*hasil < merge[PA])
            *hasil = merge[PA];
    }
    else
    {
        parent[PA] = PB;
        merge[PB] += merge[PA];

        if(*hasil < merge[PB])
            *hasil = merge[PB];

        if(rank[PA] == rank[PB])
            rank[PB]++;
    }
}

int main()
{
    int parent[30002], rank[30002], merge[30002], hasil;
    int tc, N, M, A, B;

    scanf("%d", &tc);

    for(int i = 0; i < tc; i++)
    {
        scanf("%d %d", &N, &M);

        for(int j = 0; j < N; j++)
        {
            parent[j]=j;
            rank[j]=0;
            merge[j]=1;
        }

        hasil = 1;

        for(int i=0;i<M;i++)
        {
            scanf("%d %d",&A,&B);
            A--; B--;
            Union(A,B, parent, rank, merge, &hasil);
        }
        printf("%d\n", hasil);
    }

    return 0;
}
