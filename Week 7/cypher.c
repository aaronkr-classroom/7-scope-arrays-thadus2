#include "encrypt.h"

int main() {
	extern int shift;
	char msg[100];

	printf("Enter a message to encrypt : ");
	fgets(msg, sizeof(msg), stdin);

	printf("How many letters to shift? : ");
	scanf_s("%d", &shift);
	encrypt(msg);
	printf("Encrypted : %s\n", msg);
	getch();

	return 0;
}