#include <stdio.h>
/**
 * main - prints the lowercase alphabet, then uppercase alphabet, using putchar
 *
 * Return: 0 on success
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
letter = 'A';
while (letter <= 'Z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
