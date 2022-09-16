include "main.h"

/**
 * _isupper - fumction that checks for an uppercase alphabet
 * 
 * Return: 1 if uppercase
 * otherwise, return 0
 */
int _isupper(int c);
{
	if((c >= 'A') && (c <= 'Z))
		return (1);
	else
		return (0);
}
