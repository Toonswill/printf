#include "main.h"

/**
 * get_print - selects the printing function
 * Depends on the conversion specifier passed to _printf
 *
 * @s: holds the conversion specifier
 *
 * Return: a pointer to the matching printing function
 */
int (*get_print(char s))(va_list, flags_t *)
{
	ph func_arr[] = {
		{'i', print_int},
		{'s', print_chars},
		{'c', _print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex_lower},
		{'X', print_hex_upper},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', _printn},
		{'p', print_address},
		{'%', print_percent}
		};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}
