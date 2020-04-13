#include <stdio.h>
#include <string.h>

int main()
{
    freopen("file.in", "r", stdin);
    freopen("file.out", "w", stdout);
	int testcase;
	char digit[2000];

	scanf("%d", &testcase);
	while (testcase--)
    {
		scanf("%s", digit);

		int length = strlen(digit);

		if (strcmp(digit, "1") == 0 || strcmp(digit, "4") == 0 || strcmp(digit, "78") == 0)
			printf("+\n");
		else if (digit[length - 1] == '5' && digit[length - 2] == '3')
			printf("-\n");
		else if (digit[0] == '9' && digit[length - 1] == '4')
			printf("*\n");
		else if (digit[0] == '1' && digit[1] == '9' && digit[2] == '0')
			printf("?\n");
		else
			printf("?\n");
	}

	return 0;
}
