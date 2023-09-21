#include "main.h"
/**
 * cap_string - caption string
 * @str: string
 * Return: pointer
 */

char *cap_string(char *str)
{
	int zy = 0;

	while (str[zy])
	{
	while (!(str[zy] >= 'a' && str[zy] <= 'z'))
		zy++;
	if (str[zy - 1] == ' ' ||
		str[zy - 1] == '\t' ||
		str[zy - 1] == '\n' ||
		str[zy - 1] == ',' ||
		str[zy - 1] == ';' ||
		str[zy - 1] == '.' ||
		str[zy - 1] == '!' ||
		str[zy - 1] == '?' ||
		str[zy - 1] == '"' ||
		str[zy - 1] == '(' ||
		str[zy - 1] == ')' ||
		str[zy - 1] == '{' ||
		str[zy - 1] == '}' ||
		zy == 0)

		str[zy] -= 32;
	zy++;
	}
	return (str);
}
