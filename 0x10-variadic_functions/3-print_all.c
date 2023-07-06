#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
typedef void (*print_fn)(va_list);
#define NUM_FORMAT_SPECIFIERS 4

/**
 * print_char - Prints a char.
 * @ap: A list of arguments.
 *
 * Return: void function.
 */
void print_char(va_list ap)
{
printf("%c", va_arg(ap, int));
}

/**
 * print_int - Prints an int.
 * @ap: A list of arguments.
 *
 * Return: void function.
 */
void print_int(va_list ap)
{
printf("%d", va_arg(ap, int));
}

/**
 * print_float - Prints a float.
 * @ap: A list of arguments.
 *
 * Return: void function.
 */
void print_float(va_list ap)
{
printf("%f", va_arg(ap, double));
}

/**
 * print_string - Prints a string.
 * @ap: A list of arguments.
 *
 * Return: void function.
 */
void print_string(va_list ap)
{
char *str = va_arg(ap, char *);
printf("%s", str ? str : "(nil)");
}

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 * @...: The arguments to print.
 *
 * Return: void function.
 */
void print_all(const char * const format, ...)
{
va_list ap;
print_fn fn;
int i = 0, count = 0;
struct format_specifier
{
char format;
print_fn fn;
} format_specifiers[NUM_FORMAT_SPECIFIERS] =
{
{ 'c', print_char },
{ 'i', print_int },
{ 'f', print_float },
{ 's', print_string }
};
va_start(ap, format);
while (format && format[i] && count < NUM_FORMAT_SPECIFIERS)
{
if (format[i] == format_specifiers[count].format)
{
fn = format_specifiers[count].fn;
fn(ap);
if (format[i + 1] != '\0')
{
printf(", ");
}
count++;
i++;
continue;
}
i++;
}
printf("\n");
va_end(ap);
}
