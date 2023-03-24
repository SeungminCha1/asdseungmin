#include <stdio.h>
#pragma warning(disable:4996)


void main()
{
	int n;
	scanf("%d", &n);
	printf("%d", plus(n));
}

int plus(n) {
	if (n <= 0) return 0;
	else {
		return n + plus(n - 1);
	}
}

