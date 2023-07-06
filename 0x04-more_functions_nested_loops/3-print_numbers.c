#include "main.h"
/**
 * print_numbers - a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * Return: void function
 */
void print_numbers(void)
{
int i;
char numbers[] = "0123456789\n";
for (i = 0; i <= 10; i++)
{
_putchar(numbers[i]);
}
}
