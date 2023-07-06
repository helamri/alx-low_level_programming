#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: first string.
 * @max: first string.
 *
 * Return: pointer to the newly created array,
 * if min > max or if malloc fails, return NULL.
*/
int *array_range(int min, int max)
{
int *arr, i;
if (min > max)
{
return (NULL);
}
arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i <= (max - min); i++)
{
arr[i] = min + i;
}
return (arr);
}
