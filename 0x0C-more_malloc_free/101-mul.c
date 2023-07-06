#include <stdlib.h>
#include <stdio.h>

/**
  * _isdigit - tells if the string consists of digits
  * @argv: pointer to current item in argument
  * Return: return 0 if all digits, 1 if not all digits.
  */
int _isdigit(char c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}

/**
  * _atoi - converts a string of ascii digits to the values they represent
  * @s: pointer to the source string
  * Return: value of digits
  */
int _atoi(char *s)
{
unsigned int number, i;
int sign;
sign = 1;
number = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= '0' && s[i] <= '9')
{
number = (s[i] - 48) + number * 10;
if (s[i + 1] == ' ')
{
break;
}
}
else if (s[i] == '-')
{
sign *= -1;
}
}
return (number *sign);
}

/**
  * main - main function call.
  * @argc: argument count.
  * @argv: 2D array of arguments.
  * Return: return 0 on success, 98 on failure.
  */
int main(int argc, char *argv[])
{
int i, j;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!_isdigit(argv[i][j]))
{
printf("Error\n");
exit(98);
}
}
}
return (0);
}
