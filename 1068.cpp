#include <stdio.h>

int main()
{
    int n;

	scanf("%d", &n);
	printf("%d\n", (n > 0)? n * (n + 1) / 2 : 1 + n * (1 - n) / 2);

    return 0;
}
