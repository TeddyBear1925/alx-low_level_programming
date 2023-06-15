#include <stdio.h>

/**
 * main - a program that prints the size of various types on the computer
 *
 * return: 0 (success)
 */
int main(void)
{
	int a;
	char b;
	float c;

	printf("size of int: %d bytes(s)\n", (unsigned long)sizeof(a));
	printf("size of char: %c bytes(s)\n", (unsigned long)sizeof(b));
	printf("size of int: %f bytes(s)\n", (unsigned long)sizeof(b));
	return (0);
}
