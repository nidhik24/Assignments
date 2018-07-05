#include <stdio.h>
int getline1(char [], int);
int reverse(char [], int);

int main()
{
	char line[100];
	int len;
	while((len = getline1(line, 100)) != EOF)
		{
		reverse(line, len);
		printf("%s\n", line);
		}
	return 0;
}

int reverse(char string[], int len)
{
	int i;
	char tmp;
	for(i = 0; i < len / 2; i = i + 1)
		{
		tmp = string[i];
		string[i] = string[len - i - 1];
		string[len - i - 1] = tmp;
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
