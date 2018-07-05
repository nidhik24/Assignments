#include <stdio.h>
#include <string.h>

extern int getline(char [], int);

int main()
{
	char line[100];
	char *pat = "hello";

	while(getline(line, 100) != EOF)
		{
		if(strstr(line, pat) != NULL)
			printf("%s\n", line);
		}

	return 0;
}
