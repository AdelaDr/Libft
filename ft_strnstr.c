#include <stddef.h>
#include <stdio.h>

char *ft_strnstr(const char *str, const char *c, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (*c == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < n)
       	{
       		j = 0;
       		while (str[i + j] == c[j] && (i + j) < n)
        	{
            		if (c[j + 1] == '\0')
                	return (char *)&str[i];
            		j++;
        	}
        	i++;
    	}
	return NULL;
}
/*
int main(void)
{
	const char str[] = "abcdef";
	const char c[] = "cde";
	size_t n = 4;
	char *res = ft_strnstr(str, c, n);
	if (res != NULL)
		printf("%s\n", res);
	return (0);
}*/
