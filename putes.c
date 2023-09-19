#include "main.h"

/**
 * putes - function that prints string to stdio
 *
 *@s: string
 *Retur: number of bytes
 */

int putes(char *s)
{
	int countin = 0;

	if (s)
	{
		
		for (countin = 0; s[countin] != '\0'; countin++)
		{
			putchara(s[countin]);
		}
	}
	return (countin);
}
