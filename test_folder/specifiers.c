#include <stdio.h>
#include <stdlib.h>

/**
 * struct specifier - a format specifier
 * @print_char: char format specifier
 * @print_str: string format specifier
 * @print_percent: percentage format specifier
 * @print_decimal: flot format specifier
 * @print_integer: integer format specifier
 */
typedef struct specifier
{
	char *print_char;
	char *print_str;
	char print_percent;
	float print_decimal;
	int print_integer;
} spec;

int main(void)
{
	spec = {"%c", "%s", "%%", "%d", "%i"};
}
