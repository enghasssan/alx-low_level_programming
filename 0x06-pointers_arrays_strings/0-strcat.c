#include "main.h"

/**
 * *_strcat - fn concatenates(weld) two strings
 *
 * @dest: home string to join to
 * @src: string to join dest away from home
 *
 * Return: 0 always.
 */

char *_strcat(char *dest, char *src)
{
	/*so we need to delete /0 of dest and then add src and then leave /0 at the end of src*/
	int i = 0;
	int k;
	char temp1[50];

	while (dest[i] != '\0')
	{
		temp1[i] = dest[i];
		i++;
	}
	k = i;
	/*i now = num of ch in dest + 1 just need to add src*/
	i = 0;
	while (src[i] != '\0')
	{
		temp1[k] = src[i];
		i++;
		k++;
	}
	temp[i] = '\0';
	dest = temp1;
	return (dest);
}
