#include <stdio.h>

/**
 * print_name - function that prints a name.
 * @name: string pointer.
 * @f: function pointer.
 *
 * Return: void function.
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}

