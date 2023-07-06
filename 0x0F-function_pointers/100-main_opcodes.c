#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the opcodes of its own main function.
 * @argc: the number of arguments.
 * @argv: an array of pointers to the arguments.
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
int i, n;
unsigned char *p = (unsigned char *) main;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
n = atoi(argv[1]);
if (n < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < n; i++)
{
printf("%02x ", *(p + i));
}
printf("\n");
return (0);
}
