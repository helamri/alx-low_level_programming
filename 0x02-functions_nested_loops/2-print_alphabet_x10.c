#include <stdio.h>
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
char c;
int i;
for (i = 0; i < 10; i++)
{
c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
}
}
