#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers- Prints numbers (followed by a new line)
* @separator: String to be printed between numbers
* @n: Number of integers passed to the function
* @...: Integers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ints;
unsigned int i;

va_start(ints, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(ints, int));

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
va_end(ints);
printf("\n");
}
