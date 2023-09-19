#include "main.h"


/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, str_count;

	va_list arr;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(arr, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchara(format[i]);
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			putchara(va_arg(arr, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			str_count = putes(va_arg(arr, char *));
			i++;
			printed  += (str_count - 1);
		}
		else if (format[i + 1] == '%')
		{
			putchara('%');
		}
		printed++;
	}
	va_end(arr);
	return (printed);
}
