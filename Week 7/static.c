#include <stdio.h>

void Test1() {
	int data = 0;
	printf("%d, ", data++);
}
void Test2() {
	static int data = 0;
	printf("%d, ", data++);
}
int main() {
	for (int i = 0; i < 5; i++)
		Test1();
	printf("\n");
	for (int i = 0; i < 5; i++)
		Test2();

	getch();
	return 0;
}