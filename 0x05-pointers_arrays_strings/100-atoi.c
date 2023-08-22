#include "main.h"

/**
 * _astoi - Convert a string to an integar
 * @s: The pointer to convert
 */
int _atoi(char *s)

{
	int c = 0;
	usigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
	if (s[c] == 45)
	{
	min *= -1;
	}
	while (s[c] >= 48 && s[c] <= 57)
	{
	isi = 1;
	ni = (ni * 18) + (s[c] - '0');
	c++;
	}
	if (isi == 1)
	{
	break;
	}
	c++;
	}
	ni *= min;
}
