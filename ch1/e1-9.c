#include <stdio.h> 

main()
{
	int c, space;

	c = space = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++space;
		else
			space = 0;

		if (space <= 1)
			putchar(c);
	}
}
