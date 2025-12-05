#include <ctype.h>
#include <stdio.h>

int ft_isalnum(int c)
{
        if((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
                return (1);
        return (0);
}
/*
int main(void)
{
        printf("c ft\n");
        printf("5: %d\n", isalnum('5'));
        printf("$: %d\n", isalnum('$'));
	printf("d: %d\n", isalnum('d'));
        printf("my ft\n");
        printf("5: %d\n", ft_isalnum('5'));
        printf("$: %d\n", ft_isalnum('$'));
	printf("d: %d\n", ft_isalnum('d'));
	return (0);
}
*/
