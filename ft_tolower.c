#include <stdio.h>

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
int main(void)
{
	printf("A: %d\n", ft_tolower('A'));
	printf("a: %d\n", ft_tolower('a'));
	return (0);
}*/
