#include <stdio.h>
/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
int hours, minutes;
for (hours = 0; hours < 24; hours++)
{
for (minutes = 0; minutes < 60; minutes++)
{
printf("%02d:%02d\n", hours, minutes);
}
}
}
