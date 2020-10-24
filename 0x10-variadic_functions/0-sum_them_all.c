#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all- Returns the sum of all its paramters
* @n: Number of paramters
* @...: Paramters
* Return: Sum result or 0 (if n == 0)
*/

int sum_them_all(const unsigned int n, ...)
{
if (n != 0)
{
va_list ints;
unsigned int i;
int sum = 0;

va_start(ints, n);

for (i = 0; i < n; i++)
sum += va_arg(ints, int);

return (sum);
va_end(ints);
}
return (0);
}
