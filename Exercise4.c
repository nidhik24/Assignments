#include <stdio.h>
int myatoi(char str[]);
int getline1(char line[], int max);

int main()
{
	char line[100];
	int n;
	while(1)
		{
		printf("type a number:\n");
		if(getline1(line, 100) == EOF)
			break;
		n = myatoi(line);
		printf("you typed %d\n", n);
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

int myatoi(char str[])
{
	int retval = 0;
	int i = 0;
	while(str[i] != '\0')
		{
		int digit = str[i] - '0';
		retval = 10 * retval + digit;
		i++;
		}
	return retval;
}
