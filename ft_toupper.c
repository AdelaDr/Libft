#include <stdio.h>

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
int main(void)
{
	printf("y : %d\n", ft_toupper('y'));
	printf("# : %d\n", ft_toupper('#'));
	printf("A : %d\n", ft_toupper('A'));
	return (0);
}*/
