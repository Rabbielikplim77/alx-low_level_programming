#include "main.h"

/**
  * _memcpy - a function that copies memory area.
  * @src: memory area where bytes are coppied from
  * @dest: memory area where bytes re copied to
  * @n: Function paramete
  * Return: Copied memory
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
