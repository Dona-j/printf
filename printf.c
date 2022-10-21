#include "main.h"

/**
 * _printf - function that produces output based on a format
 *
 * @format: a character array
 *
 * Return: Always 0
 */

int _printf(const char *format, ...);
{
	va_list varg;
	int s_len = 0;
	int a = 0;
	char *s;
	va_start(varg, format);

