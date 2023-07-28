#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: Print the numbers
 * Return: 0
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("fizz");
else if (i % 5 == 0)
printf("buzz");
else
printf("%i", i);
if (i < 100)
printf(" ");
}
printf("\n);
retuen (0);
}
