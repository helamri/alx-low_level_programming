#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: A string of 0 and 1 chars
 *
 * Return: The converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1 or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
unsigned int bit_value = 1;
int i;
if (b == NULL)
{
return (0);
}
for (i = 0; b[i] != '\0'; i++)
{
}
for (i = i - 1; i >= 0; i--)
{
if (b[i] == '0')
{
bit_value <<= 1;
}
else if (b[i] == '1')
{
result += bit_value;
bit_value <<= 1;
}
else
{
return (0);
}
}
return (result);
}
