#include <ctype.h>
#include <stdio.h>

int ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int main(void)
{
	printf("c ft\n");
	printf("5: %d\n", isdigit('5'));
	printf("$: %d\n", isdigit('$'));
	printf("my ft\n");
        printf("5: %d\n", ft_isdigit('5'));
        printf("$: %d\n", ft_isdigit('$'));
	return (0);
}*/
