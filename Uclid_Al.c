#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int gcd(int a, int b) {
	if (a > b) {
		if (a % b == 0) return b;
		else return gcd(b, (a % b));
	}
	else if (a == b) return b;
	else {
		if (b % a == 0) return a;
		else return (gcd(a, b % a));
	}
}

int main() {
	int a, b;
	
	scanf("%d %d", &a, &b);

	printf("%d", gcd(a, b));
}
