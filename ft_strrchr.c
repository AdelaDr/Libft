#include <stdio.h>

char *ft_strrchr(const char *str, int c)
{
	char *p;

	p = NULL;
	while(*str)
	{
		if (*str == (char)c)
			p = str;
		str++;
	}
	if (c == '\0')
		return (str);
	return (p);
}
/*
int main(void)
{
	char myStr[] = "Hello World";
	char *myPtr = ft_strrchr(myStr, 'l');
	if (myPtr != NULL)
  		printf("%s\n", myPtr);
	return (0);
}*/
