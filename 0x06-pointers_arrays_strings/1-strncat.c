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
	strncat(dest, src, n);
	return (dest);
}
