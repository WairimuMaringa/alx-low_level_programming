#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: pointer to nmemb array, null if otherwise
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *str;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	str = malloc(nmemb * size);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (x = 0; x < (nmemb * size); x++)
		str[x] = 0;
	return (str);
}
