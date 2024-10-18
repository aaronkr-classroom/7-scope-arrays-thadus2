#include <stdio.h>
int shift;

void encrypt(char* msg) {
	char ch;
	int i = 0;

	while (msg[i] != '\0') {
		ch = msg[i];

		if (ch >= 'a' && ch <= 'z')
			ch = (ch - 'a' + shift) % 26 + 'a';
		else if (ch >= 'A' && ch <= 'Z') 
			ch = (ch - 'A' + shift) % 26 + 'A';
		msg[i] = ch;
		i++;
	}
}