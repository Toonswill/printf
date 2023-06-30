#include "main.h"

/**
 * convert - converts numbers and base into strings
 *
 * @num: number to input
 * @base: input of base
 * @lower: flag if hexa values need to be lowercase
 *
 * Return: converted string
 */
char *convert(unsigned long int num, int base, int lower)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lower)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
