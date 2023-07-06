#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: a pointer to a string
 * @accept: a pointer to a string
 *
 * Return: the length of the prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, len = 0;
int found;
for (i = 0; s[i] != '\0'; i++)
{
found = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
found = 1;
break;
}
}
if (found == 0)
{
return (len);
}
len++;
}
return (len);
}
