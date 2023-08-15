#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: char
 * Return: on succes 1.
 * On error, -1.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
