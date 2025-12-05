#include <stdio.h>

char *ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}
/*
int main(void)
{
	char myStr[] = "Hello World";
	char *myPtr = ft_strchr(myStr, 'W');
	if (myPtr != NULL)
		printf("%s\n", myPtr);
	return(0);
}*/
