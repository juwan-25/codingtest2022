#include <stdio.h>

int main()
{
	for (int j = 1; j <= 9; j++) {
		for (int i = 2; i <= 9; i++) {
			printf("%d X %d = %d\t", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}