#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
* print_char- Prints a char
* @arg: Arguments pointing to the character
*/

void print_char(va_list arg)
{
char ch;
ch = va_arg(arg, int);
printf("%c", ch);
}

/**
* print_int- Prints an integer
* @arg: Arguments pointing to the integer
*/

void print_int(va_list arg)
{
int n;
n = va_arg(arg, int);
printf("%d", n);
}

/**
* print_float- Prints a float
* @arg: Arguments pointing to the float
*/

void print_float(va_list arg)
{
float flot;
flot = va_arg(arg, double);
printf("%f", flot);
}

/**
* print_string- Prints a string
* @arg: Arguments pointing to the string
*/

void print_string(va_list arg)
{
char *str;
str = va_arg(arg, char *);

if (str == NULL)
{
printf("(nil)");
return;
}
printf("%s", str);
}

/**
* print_all- Prints anything (followed by a new line)
* @format: List of types of arguments passed to the function
* @...: Arguments to be printed
*/

void print_all(const char * const format, ...)
{
va_list args;
int i = 0, j = 0;
char *separator = "";

PrintFormat_t fs[] = {
{"c", print_char},{"i", print_int},{"f", print_float},{"s", print_string}
};

va_start(args, format);

while (format && (*(format + i)))
{
j = 0;

while (j < 4 && (*(format + i) != *(fs[j].form)))
j++;

if (j < 4)
{
printf("%s", separator);
fs[j].prnt(args);
separator = ", ";
}
i++;
}
printf("\n");
va_end(args);
}
