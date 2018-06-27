#include <stdio.h>
int main()
{
	int c;
	while((c = getchar()) != EOF)
	{
		printf("character %c has value %d\n", c, c);
	}
	return 0;
}
