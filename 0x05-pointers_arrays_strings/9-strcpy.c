#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed to by src
 * @src: copy from
 * @dest: copy to
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
int 1 = 0;
int x = 0;

while (*(src + 1) != '\0')
{
1++;
}
for (x = 0; x < 1; x++)
{
dest[x] = src[x];
}
dest[1] = '\0';
return (dest);
}
