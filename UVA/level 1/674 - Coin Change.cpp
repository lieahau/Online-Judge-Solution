#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cent[]={1,5,10,25,50};
	int n = sizeof(cent)/sizeof(int);

	int DP[7500]={0};
	DP[0]=1;

	for(int i = 0; i < n; i++)
		for(int j = cent[i]; j < 7500; j++)
			DP[j] += DP[j-cent[i]];

	int money;
	while(scanf("%d", &money) == 1)
		printf("%d\n",DP[money]);

    return 0;
}
