#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct PrintFormat- Function that matches the @format
 * @format: Format that argument should be printed
 * @function: Function associated with @format
 */

typedef struct PrintFormat
{
  char *format;
  void (*function)(va_list);
} PrintFormat_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
