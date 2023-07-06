#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes
 * each and returns a pointer to the allocated memory. The memory is set to
 * zero.
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb * size; i++)
{
ptr[i] = 0;
}
return ((void *)ptr);
}
