#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory
 * @str: the string.
 *
 * Return: NULL if str = NULL, On success returns a pointer to
 * the duplicated string. NULL if insufficient memory was available.
*/
char *_strdup(char *str)
{
char *nstr;
unsigned int len, i;
if (str == NULL)
{
return (NULL);
}
len = 0;
while (str[len] != '\0')
{
len++;
}
nstr = malloc(sizeof(char) * (len + 1));
if (nstr == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
nstr[i] = str[i];
}
nstr[len] = '\0';
return (nstr);
}
