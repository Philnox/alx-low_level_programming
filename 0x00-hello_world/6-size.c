#include <stdio.h>
/**
 * main - Entry
 * Return: 0
*/
main(void)
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %lu byte(S)\n",  (unsigned long)sizeof(a));
printf("Size of an int: %i byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %i byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %i byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %i byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
