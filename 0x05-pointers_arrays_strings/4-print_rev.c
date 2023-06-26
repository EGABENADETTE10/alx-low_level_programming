#include "main.h"
/**
 * print_rev - function prints a string in reverse
 * followed by a new line.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int strin = 0;
int o;
while (*s != '\0')
{
strin++;
s++;
}
s--;
for (o = strin; o > 0; o--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
