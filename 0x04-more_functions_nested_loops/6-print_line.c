#include <stdio.h>

/**
 * print_line - prints a line of underscores
 * @n: number of underscores to print
 *
 * Return: void
 */
void print_line(int n)
{
if (n <= 0)
{
putchar('\n');
}
else
{
int i;
for (i = 0; i < n; i++)
{
putchar('_');
}
putchar('\n');
}
}
