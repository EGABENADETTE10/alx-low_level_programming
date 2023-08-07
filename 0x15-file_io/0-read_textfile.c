#include "main.h"
#include <stdlib.h>
/**
 * read_textfile-function read text file prints to POSIX STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: f-actual number of bytes read and printed
 * 0 If function fails,filename is null,write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t f;
ssize_t t;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);
free(buf);
close(fd);
return (f);
}
