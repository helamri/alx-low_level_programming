#include <stdio.h>
/**
 * main - prints the lowercase alphabet except q and e, using putchar
 *
 * Return: 0 on success
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}
