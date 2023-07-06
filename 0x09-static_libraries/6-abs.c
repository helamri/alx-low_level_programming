#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @num: integer input
 * Return: absolute value of num
 */
int _abs(int num)
{
if (num < 0)
{
return (-1 * num);
}
else
{
return (num);
}
}
