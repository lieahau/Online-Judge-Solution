#include <stdio.h>

int main() {
	int n, px, py, x, y;

	scanf("%d",&n);
	while (n != 0) {
        scanf("%d %d", &px, &py);

		while (n--) {
			scanf("%d %d", &x, &y);

			if (x == px || y == py)
				printf("divisa");
			else if (x < px && y > py)
				printf("NO");
			else if (x > px && y > py)
				printf("NE");
			else if (x > px && y < py)
				printf("SE");
			else if (x < px && y < py)
				printf("SO");
			printf("\n");

		}

		scanf("%d",&n);
	}
	return 0;
}
