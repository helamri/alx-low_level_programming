/**
 * swap_int - function that swaps the values of two integers.
 * @a: first number
 * @b: second number
 *
 * Return: void function
 */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
