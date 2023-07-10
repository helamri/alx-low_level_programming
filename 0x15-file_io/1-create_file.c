#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>

/**
 * create_file - function that creates a file with specific permissions
 * and writes text to it
 * @filename: name of the file to create
 * @text_content: content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd, len, wrlen;
if (!filename)
{
return (-1);
}
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
len = 0;
if (fd == -1)
{
return (-1);
}
if (text_content)
{
while (text_content[len])
{
len++;
}
wrlen = write(fd, text_content, len);
if (wrlen == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
