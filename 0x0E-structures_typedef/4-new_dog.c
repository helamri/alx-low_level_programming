#include <stdlib.h>
#include "dog.h"
char *_strdup(char *str);

/**
 * new_dog - function with 3 arguments
 * @name: char type pointer
 * @age: float type
 * @owner: char type pointer
 *
 * Description: creates a new dog
 * Return: NULL if fail or pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_d;
new_d = malloc(sizeof(dog_t));
if (new_d == NULL)
{
return (NULL);
}
new_d->name = _strdup(name);
if (!new_d->name)
{
free(new_d);
return (NULL);
}
new_d->age = age;
new_d->owner = _strdup(owner);
if (!new_d->owner)
{
free(new_d->name);
free(new_d);
return (NULL);
}
return (new_d);
}

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