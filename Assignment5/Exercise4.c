#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 100
int getline1(char [], int);

int main()
{
	char string1[MAXLINE], string2[MAXLINE];
	int a, b;
	char newstring[MAXLINE*2];

	a = getline1(string1, 100);
	b = getline1(string2, 100);

	if(a == EOF || b == EOF)
		exit(1);

	strcpy(newstring, string1);
	strcat(newstring, string2);

	printf("%s\n", newstring);
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
	return EOF;
line[nch] = '\0';
return nch;
}