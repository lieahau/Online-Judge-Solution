#include <bits/stdc++.h>

using namespace std;

typedef struct SegmentTree{
    int even, odd;
} SegTree;

int arr[200000], status; // status = 0 modify; status = 1 even; status = 2 odd
SegTree segtree[800000];

void build(int idx, int l, int r)
{
    if(l == r)
    {
        if(arr[l] % 2 == 0)
            segtree[idx].even++;
        else
            segtree[idx].odd++;
        return;
    }
    int mid = (l+r) / 2;
    build(idx*2, l, mid);
    build(idx*2+1, mid+1, r);

    segtree[idx].even = segtree[idx*2].even + segtree[idx*2+1].even;
    segtree[idx].odd = segtree[idx*2].odd + segtree[idx*2+1].odd;
}

int find(int idx, int l, int r, int cari_l, int cari_r)
{
    if(cari_l <= l && r <= cari_r)
    {
        if(status == 1)
            return segtree[idx].even;
        else if(status == 2)
            return segtree[idx].odd;
    }
    int ret = 0;
    int mid = (l+r) / 2;

    if(cari_l <= mid)
        ret += find(idx*2, l, mid, cari_l, cari_r);
    if(cari_r >= mid+1)
        ret += find(idx*2+1, mid+1, r, cari_l, cari_r);

    return ret;
}

void updateSegTree(int cur, int l, int r, int status, int cari)
{
    if(status == 1) // jika newVal genap
    {
        segtree[cur].even++;
        segtree[cur].odd--;
    }
    else if(status == 2) // jika newVal ganjil
    {
        segtree[cur].odd++;
        segtree[cur].even--;
    }

    if(l != r)
    {
        int mid = (l+r)/2;
        if(cari <= mid)
            updateSegTree(2*cur, l, mid, status, cari);
        if(cari >= mid+1)
            updateSegTree(2*cur+1, mid+1, r, status, cari);
    }
}

void update(int n, int idx, int newVal)
{
    // jika status newVal == status oldVal, maka ga perlu update segtree
    if((arr[idx] % 2 == 0 && newVal % 2 == 0) || (arr[idx] % 2 == 1 && newVal % 2 == 1))
    {
        arr[idx] = newVal;
        return;
    }

    if(newVal % 2 == 0)
        status = 1;
    else
        status = 2;

    arr[idx] = newVal;
    updateSegTree(1, 1, n, status, idx);
}

int main()
{
    memset(segtree,0, sizeof(segtree));
    long long int n, query, x, y;
    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    build(1, 1, n);

    cin >> query;
    for(int i = 0; i < query; i++)
    {
        cin >> status >> x >> y;
        if(status > 0)
        {
            long long int ans = find(1, 1, n, x, y);
            cout << ans << endl;
        }
        else
            update(n, x, y);
    }



    return 0;
}
