/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int num_flips = 0;
while (xor_result)
{
if (xor_result & 1)
{
num_flips++;
}
xor_result >>= 1;
}
return (num_flips);
}
