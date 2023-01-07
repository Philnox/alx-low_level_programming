#include "main.h"
<<<<<<< HEAD
/**
* _memset - fill a block of memory with a specific value
* @s: starting address of memory to be filled
* @b: the desired value
* @n: number of bytes to be changed
*
* Return: changed array with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)

{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
=======

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */


char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; n > 0 ; i++, n--)
{
	s[i] = b;
}

>>>>>>> bb31b031daec76ff78e4f46daaf667bec648de35
return (s);
}
