#include <stdio.h>

int main()
{
	int c;
	while((c = getchar()) != EOF)
		{
		putchar(c);
		if(c == '\n')
			putchar('\n');
		}
	return 0;
}
