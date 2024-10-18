#include <stdio.h>

int result = 0;

void Sum(int data1, int data2) {
	result = data1 + data2;
}

int main() {
	int a = 3,
		b = 5;
	Sum(a, b);
	printf("%d + %d = %d", a, b, result);

	return 0;
}