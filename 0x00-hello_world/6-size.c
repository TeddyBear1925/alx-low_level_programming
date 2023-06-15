#include <stdio.h>

/**
 * main - a program that prints the size of various types on the computer
 *
 * return: 0 (success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;


	printf("size of int: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("size of long int: %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("size of long long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("size of char: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("size of float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
