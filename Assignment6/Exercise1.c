#include <stdio.h>
#include <string.h>

int getline1(char [], int);

int main()
{
	char line[100];
	char *pat = "hello";

	while(getline1(line, 100) != EOF)
		{
		if(strstr(line, pat) != NULL)
			printf("%s\n", line);
		}

	return 0;
}

int getline1(char line[], int max)
{
int nch = 0;
int c;
max = max - 1;	
while((c = getchar()) != EOF)
	{
	if(c == '\n')
		break;
	if(nch < max)
		{
		line[nch] = c;
		nch = nch + 1;
		}
	}
if(c == EOF && nch == 0)
  {
	return EOF;
  }
line[nch] = '\0';
return nch;
}
