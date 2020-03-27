|:wq|:wq "holberton.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int..
 * @b: address pointing to a string of 0 and 1 chars.
 *
 * Return: unsigned int converted from binary code
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int exp, i, tmp = 0, add = 0;

	if (b != '\0')
	{
		return (0);
	}
	exp = 0;
	while (b[exp] != '\0')
	{
		if (b[exp] != '1' && b[exp] != '0')
		{
			return (0);
		}
		exp++;
	}
	exp = exp - 1;
	for (i = 0; b[i] != '\0'; i++)
	{
		tmp = b[i] - '0';
		tmp = tmp << exp;
		add = add + tmp;
		exp--;
	}
	return (add);
}
