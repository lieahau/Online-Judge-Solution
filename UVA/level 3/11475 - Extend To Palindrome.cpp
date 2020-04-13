#include<stdio.h>
#include<string.h>

char A[100002], B[100002];
int X[100002];

void KMPTable(char *A)
{
	int i = 1, j = -1;
	X[0] = -1;

	while(A[i])
    {
		while(j >= 0 && A[j+1] != A[i])
			j = X[j];

		if(A[j+1] == A[i])
			j++;

		X[i++] = j;
	}
}
int KMPMatching(char A[], char B[]) //Knuth Morris Pratt Algorithm, P.S.: di modifikasi xD
{
	KMPTable(B);

    int Alen = strlen(A), Blen = Alen;
	int i, j;

	for(i = 0, j = -1; i < Alen; i++)
    {
		while(j >= 0 && B[j+1] != A[i])
			j = X[j];

		if(B[j+1] == A[i])
            j++;
	}

	return j;
}

int main()
{
	while(scanf("%s", A) == 1)
    {
        int Alen = strlen(A), Blen = Alen;

        for(int i = 0, j = Blen-1; i < Alen; i++, j--)
            B[j] = A[i];

        B[Blen] = '\0';

        int ekor = KMPMatching(A, B);

        for(int i = Blen-1; i > ekor; i--)
            printf("%c", B[i]);
        printf("%s\n", B);
    }

    return 0;
}
