#include <stdio.h>
#include <string.h>

int main()
{
	char word[20];
	int x,y;
	x=getchar();
	y=getchar();

    if(y > 0)
    	strcpy(word, "north");
    else if(y < 0)
    	strcpy(word, "south");
    else	strcpy(word, "");
    
    if(x > 0)
    	strcat(word, "east");
    else if(x < 0)
    	strcat(word, "west");
    else	strcat(word, "");  
  
    printf("%s\n", word);    	
    	return 0;
    }
