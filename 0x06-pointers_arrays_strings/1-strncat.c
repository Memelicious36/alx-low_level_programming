#include "main.h"

/**
 * _strncat - concates two string at most
 *
 * an inputtedd numberr of bytes from src.
 *
 * @dest: The string to be appended upon.
 *
 * @src: The string to be appended to dest.
 *
 * @n: The number of bytes from src to be appended to dest.
 *
 *Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src' int n)

{

	int index = 0, char *src, int n)
	
	while (dest[index++])
	dest_len++
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
