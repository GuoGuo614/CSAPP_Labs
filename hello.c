#include<stdio.h>
#include<string.h>

typedef unsigned char *byte_pointer;
	
void show_bytes(byte_pointer start, size_t len) {
	size_t i;
	for (i = 0; i < len; i++) {
		printf("%02x", start[i]);
	}
	printf("\n");
}

void inplace_swap(int *x, int *y) {
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

void show_int(int x) {
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
	show_bytes((byte_pointer) &x, sizeof(void *));
}

int bitXor(int x, int y) {
  int a = x & y;
  a = ~a;
  int b = (~x) & (~y);
  b = ~b;
  return a & b;
}

int tmin(void) {
  int bytes = sizeof(int);
  int a = (0x1 << (bytes * 8 - 1));
  return a;
}

int isTmax(int x) {
  int isT = (x + 1) ^ (~x);
  return !isT;
}

int main() {
	float a = 0.1;
	float b = 0.2;
	float c = 0.3;
	printf("%d\n", 0.25 + 0.25 == 0.5);

	return 0;
}
