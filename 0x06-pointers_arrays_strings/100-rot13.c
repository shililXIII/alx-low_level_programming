#include "main.h"

/**
 * rot13 - encoder alpha
 * @s: pointer to string
 * Return: s
 */
char *rot13(char *s)
{
	int i;
	int j;
	char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWYXYZabcdefghijklmnopqrstuwvxyz";
	char drot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == d1[j])
			{
				d1[j] = drot[j];
				break;
			}
		}
	}
	return (s);
}
