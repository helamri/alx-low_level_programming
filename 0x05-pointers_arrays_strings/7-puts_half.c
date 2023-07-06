#include <stdio.h>
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string whose second half is to be printed
 *
 * Retrun: void function
 */

void puts_half(char *str)
{
int i, last;
i = 0;
while (str[i] != '\0')
{
i++;
}
last = (i + 1) / 2;
for (i = last; str[i]; i++)
{
putchar (str[i]);
}
putchar ('\n');
}
