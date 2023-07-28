#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3--calc.h"

/***
 * main  prints the results
 * @argc: the number of arguments
 * @argv: an array of pointer to the argument
 * Return:0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
int num1, num2;
char *op;
if (argc != 4)
{
printf("error\n");
exit(98);
}
num1 = atoi(argv[1]);
op = argv[2];
num2 = atoi(argv[3]);
if (get_op_func(op) == NULL || op[1] != '\0)
{
printf("error\n");
exit(98);
}
if ((*op == '/' && num@ == 0 \\ *op == '%' && num2 == 0))
{
printf("error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(num1, nim2));
return (0);
}
