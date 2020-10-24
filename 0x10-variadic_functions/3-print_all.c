#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all- Prints anything (followed by a new line)
* @format: List of types of arguments passed to the function
* @...: Arguments to be printed
*/

void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, j = 1;
char *str;

while (format)
{
va_start(args, format);
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
default:
j = 0;
break;
}
if (format[i + 1] && j)
printf(", ");
i++;
}
va_end(args);
break;
}
printf("\n");
}
