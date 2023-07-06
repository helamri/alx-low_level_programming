#include <stdio.h>
/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size: size of the triangle
 * Return: void function
 */
void print_triangle(int size)
{
if (size <= 0)
{
putchar('\n');
}
else
{
int i, j, k;
for (i = 1; i <= size; i++)
{
for (j = size - i; j > 0; j--)
{
putchar(' ');
}
for (k = 1; k <= i; k++)
{
putchar('#');
}
putchar('\n');
}
}
}
