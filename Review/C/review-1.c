#pragma warning(disable:4996)
#include <stdio.h>

int sum(int i);

int main() {

	int X;
	scanf("%d", &X);

	int total = 0;
	for (int i = 1; i <= X; i++)
		total += sum(i);

	printf("%d", total);

	return 0;
}

int sum(int i) {
	int sum = 0;
	for (int j = 1; j <= i; j++)
		sum += j;

	return sum;
}


