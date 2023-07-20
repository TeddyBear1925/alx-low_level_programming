#include "variadic_function.h"
#include <stdarg.h>

/**
 * sum_them_all - return sum of parameters
 * @n: number of parameters passed to function
 * Return: f n == 0;
 */

int sum_them_all(const unsinged int n, ...)
{
va_list ap;
unsigned int i, sum = 0;
va_start(ap, n);
for (i = 0; i < n; i++;
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
