#include <string.h>
#include <stdio.h>
#include <stddef.h>

size_t ft_strlen(const char *str)
{
    size_t len; 

        len  = 0;    
        while (str[len])
           len++;
        return len;
}
/*
int main(void)
{
	printf("c ft\n");
	printf("abc: %ld\n", strlen("abc"));
	printf("123456: %ld\n", strlen("123456"));
	printf("abc: %d\n", ft_strlen("abc"));
        printf("123456: %d\n", ft_strlen("123456"));
	return (0);
}*/
