

/**
* _atoi - Convert string to an integer.
* @s: Pointer to a character string.
*
* Return: void.
*/

int _atoi(char *s)
{
	int x;
	unsigned int y;
	char c;

	c = *s;
	y = 0;
	x = 1;
	while (c != '\0' && (c < '0' || c > '9'))
	{
		if (c == '-')
			x *= -1;
		c++;
	}
	if (c != '\0')
	{
		do {
			y = y * 10 + (c - '0');
			c++;
		} while (c >= '0' && c <= '9');
	}
	return (y * x);
}
