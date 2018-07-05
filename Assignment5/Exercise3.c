#include <stdio.h>
int countnchars(char string[], int ch);

int main()
{
	char string[] = "Hello, world!";
	char c = 'l';

	printf("The letter %c appears in \"%s\" %d times.\n",
		c, string, countnchars(string, c));
	return 0;
}

int countnchars(char string[], int ch)
{
	int i;
	int count = 0;
	for(i = 0; string[i] != '\0'; i++)
		{
		if(string[i] == ch)
			count++;
		}
	return count;
}