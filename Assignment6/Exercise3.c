int reverse(char *string)
{
	char *lp = string;
	char *rp = &string[strlen(string)-1];
	char tmp;
	while(lp < rp)
		{
		tmp = *lp;
		*lp = *rp;
		*rp = tmp;
		lp++;
		rp--;
		}
	return 0;
}
