#include "main.h"

/**
 * print_address - prints addresses of input
 *
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags if in _printf
 *
 * Return: characters printed
 */
int print_address(va_list l, flags_t *f)
{
	char *str;
	unsigned long int p = va_arg(l, unsigned long int);

	register int count = 0;

	(void)f;

	if (!p)
		return (_puts("(nil)"));
	str = convert(p, 16, 1);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}
