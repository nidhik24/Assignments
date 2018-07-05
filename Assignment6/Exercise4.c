int charcount(char *string, int ch)
{
	char *p;
	int count = 0;
	for(p = string; *p != '\0'; p++)
		{
		if(*p == ch)
			count++;
		}
	return count;
}
