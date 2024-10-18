#include <stdio.h>
void check_endianness() {
	unsigned int num = 0x12345678;
	unsigned char* byte_ptr = (unsigned char*)&num;

	for (int i = 0; i < sizeof(num); i++) {
		printf("%p    0x%02c\n", (byte_ptr + i), byte_ptr[i]);
	}

	if (byte_ptr[0] == 0x12) {
		printf("\nThis is a big-endian system.");

	}
	else if (byte_ptr[0] == 0x78) {
		printf("\nThis is a little-endian system.");
	}

	else {
		printf("\nUnknown ");
	}
}


int main(void) {
	check_endianness();
	return 0;
}