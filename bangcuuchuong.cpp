#include <stdio.h>
#include <windows.h>
int main()
{
	printf("BANG CUU CHUONG\n");
	for (int i = 1; i <= 10; i++) {
		for (int j = 2; j <= 10; j++) {
			printf("%d x %d = %d\t", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}
