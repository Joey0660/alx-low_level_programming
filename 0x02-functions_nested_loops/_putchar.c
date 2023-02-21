#include "main.h"
#include <unistd.h>

/**
 * _putchar -  write the character c to stdout
 *
 * Return: on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
