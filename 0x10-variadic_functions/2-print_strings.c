#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings- Prints strings (followed by a new line)
* @separator: String to be printed between strings
* @n: Number of strings passed to the function
* @...: Strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strs;
unsigned int i;
char *ptr;

va_start(strs, n);

for (i = 0; i < n; i++)
{
ptr = va_arg(strs, char *);

if (ptr == NULL)
printf("(nil)");
else
printf("%s", ptr);

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(strs);
}
