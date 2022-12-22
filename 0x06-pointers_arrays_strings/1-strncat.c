#include "main.h"
#include <string.h>
/**
 * _strncat - function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: any integer
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i] = src[i];
		while (i < n)
			dest[i++] = '\0';

	return (dest);
}
