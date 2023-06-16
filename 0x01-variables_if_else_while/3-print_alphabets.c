#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints the alphabet in lower then upper case'
 * Return: 0 (sucess)
 */

int main(void)
{
	char n = 97;
	char c = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (c <= 90)
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
