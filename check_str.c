#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int inspection(char* p, char check, int l) {
	if (l == 0) return 0;
	if (*p == check) return 1 + inspection(p + 1, check, l - 1);
	else return inspection(p + 1, check, l - 1);
}

int main() {
	char str[100], check;

	scanf("%s", str);
	getchar();
	scanf("%c", &check);

	printf("%d", inspection(str, check, strlen(str)));
}
