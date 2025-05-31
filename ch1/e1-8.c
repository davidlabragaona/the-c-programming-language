#include <stdio.h>

main()
{
	int c, nl, tabs, blanks;

	nl = tabs = blanks = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
		else if (c == '\t')
			++tabs;
		else if (c == ' ')
			++blanks;
		printf("%d, %d, %d\n", nl, tabs, blanks);
}
