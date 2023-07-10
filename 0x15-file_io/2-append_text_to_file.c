#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stddef.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, bytes_written, text_len;
if (!filename)
{
return (-1);
}
if (!text_content)
{
return (1);
}
text_len = 0;
while (text_content[text_len])
{
text_len++;
}
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
return (-1);
}
bytes_written = write(fd, text_content, text_len);
close(fd);
if (bytes_written == -1)
{
return (-1);
}
return (1);
}
