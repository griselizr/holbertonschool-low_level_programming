#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 * struct var - prints function arguments
 * @t: print type
 * @f: print funtion
 */

typedef struct var
{
  char *t;
  void(*f)(va_list);
} var_t;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);



#endif
