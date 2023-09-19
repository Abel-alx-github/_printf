#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: format.
 * @str_count: counts the number of string
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, str_count;

	va_list arr;

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
			str_count = putes(va_arg(arr, char *)); /* here putes is a function that prints str_count to stdio*/
			i++;
			printed  += (str_count - 1);
		}
		else if (format[i + 1 ] == '%')
		{
			putchara('%');
		}
		printed++;
	}
	va_end(arr);
	return (printed);
}
