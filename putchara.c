#include "main.h"

/**
 * putchara - function that prints to the stdio
 * @a: chararcter input
 * Return: 1 on success
 */

int putchara(char a)
{
	return (write(1, &a, 1));
}
