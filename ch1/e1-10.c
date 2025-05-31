#include <stdio.h>

main()
{
	int c;
	c = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			putchar('\\');
			c = 't';
		}
		else if (c == '\b')
		{
			putchar('\\');
			c = 9;
		}
		else if (c == '\\')
		{
			putchar('\\');
			c = '\\';
		}
		putchar(c);
	}
}
