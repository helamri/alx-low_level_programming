/**
 * *_strncpy - function that copies a string.
 * @dest: destination
 * @src: source
 * @n: number
 *
 * Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int byteCount;
for (byteCount = 0; byteCount < n && src[byteCount] != '\0'; byteCount++)
{
dest[byteCount] = src[byteCount];
}
for (; byteCount < n; byteCount++)
{
dest[byteCount] = '\0';
}
return (dest);
}
