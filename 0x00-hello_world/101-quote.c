/**
 * main - Entry point
 *
 * Description: This function serves as the entry point of the program. It
 *              prints a message to the standard error and returns 1.
 *
 * Return: Always 1
 */
#include <unistd.h>

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
