#include "main.h"

/**
 * print_chars - prints every character through a string
 *
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags if passed to _printf
 *
 * Return: number of char printed
 */
int print_chars(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * _print_char - prints a character
 *
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags if passed to _printf
 *
 * Return: number of char printed
 */
int _print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
