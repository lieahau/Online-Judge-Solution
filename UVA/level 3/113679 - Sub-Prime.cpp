#include <stdio.h>

int main()
{	
	int B, N, D, C, V, i, j;
	int R[100];
	bool a;
	
	while(scanf("%d %d", &B, &N) && B > 0)
	{
		a = true;
		for(i=0; i<B;i++)
		{
			scanf("%d", &R[i]);
		}
		
		for(j=0; j<N; j++)
		{
			scanf("%d %d %d", &D, &C, &V);
			
			R[D-1] = R[D-1] - V;
			R[C-1] = R[C-1] + V;
		}
		for(int n=0; n<B; n++)
		{
			if(R[n] < 0)
			{
				a = false;
				break;
			}
		}
		if(a)
		{
		printf("S\n");
		}
		else
		{
		printf("N\n");
		}
	}

return 0;	
}
