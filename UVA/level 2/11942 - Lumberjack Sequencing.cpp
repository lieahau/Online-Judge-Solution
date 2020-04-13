#include <stdio.h>

int main()
{
	int N, bil1, bil2;
	bool kebesar, kekecil;

	scanf("%d", &N);
	printf("Lumberjacks:\n");

	while (N--)
    {
		kebesar = kekecil = false;
		scanf("%d", &bil1);

		for (int i = 0; i < 9; i++)
		{
			scanf("%d", &bil2);

			if (bil1 < bil2)
				kebesar = true;
			else
				kekecil = true;
			bil1 = bil2;
		}

		if (kebesar && kekecil)
			printf("Unordered\n");
		else
			printf("Ordered\n");
	}

	return 0;
}
