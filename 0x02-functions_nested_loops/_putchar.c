#include <unistd.h>
/**
 * _putchar-writes to stdout the character c
 * @c:character to print
 * Return:1 success
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
