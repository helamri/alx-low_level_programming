#include <stdio.h>
/**
 * puts2 - function that prints every other character of a string
 * @str: The string to be printed
 *
 * Return: void function
 */
void puts2(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a++)
{
if (a % 2 == 0)
putchar (str[a]);
}
putchar ('\n');
}
