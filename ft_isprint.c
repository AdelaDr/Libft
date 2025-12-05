#include <ctype.h>
#include <stdio.h>

int ft_isprint(int c)
{
        if(c >= ' ' && c <= '~')
                return (1);
        return (0);
}
/*
int main(void)
{
        printf("c ft\n");
        printf("5: %d\n", isprint('5'));
        printf("$: %d\n", isprint('$'));
        printf("shift in: %d\n", isprint(15));
        printf("del: %d\n", isprint(127));
        printf("my ft\n");
        printf("5: %d\n", ft_isprint('5'));
        printf("$: %d\n", ft_isprint('$'));
		printf("shift in: %d\n", ft_isprint(15));
        printf("del: %d\n", ft_isprint(127));
        return (0);
}
*/
