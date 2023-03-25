#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)


int hanoi(int n, char from, char via, char to);

int main()
{
	int n;
	scanf("%d", &n);

	hanoi(n, 'A', 'B', 'C');

	return 0;
}

int hanoi(int n, char from, char via, char to) {
	
	if (n == 1) printf("%c %c\n", from, to);
	else {
		hanoi(n - 1, from, to, via);
		printf("%c %c\n", from, to);
		hanoi(n - 1, via, from, to);
	}
	return 0;
}



