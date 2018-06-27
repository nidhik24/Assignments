#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINE 100
int getline1(char [], int);

int main()
{
	double balance = 0.0;
	char line1[100], line2[100];

	while(getline1(line1, 1000) > 0)
		{
		getline1(line2, 1000);

		if(strcmp(line1, "deposit") == 0)
			balance += atof(line2);
		else if(strcmp(line1, "check") == 0)
			balance -= atof(line2);
		else	{
			printf("bad data line: not \"check\" or \"deposit\"\n");
			continue;
			}
		printf("balance: %.2f\n", balance);
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
