#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints the alphabet in lowercase, followed by a new line'
 * Return: 0 (sucess)
 */

int main(void)
{
	char n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
