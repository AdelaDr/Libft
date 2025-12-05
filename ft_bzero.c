#include <stddef.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
        unsigned char *p;
	p = (unsigned char *) s;

        while (n > 0)
        {       
                *p = 0;
                p++;
                n--;
        }       
}     
/*
int main(void)
{
    char buffer[10] = "abcdefghi";

    printf("Original buffer: %s\n", buffer);

    ft_bzero(buffer + 3, 3);  // zero out 3 bytes starting at index 3

    printf("After ft_bzero(buffer + 3, 3): ");
    for (int i = 0; i < 10; i++)
    {
        if (buffer[i] == 0)
            printf("\\0");
        else
            printf("%c", buffer[i]);
    }
    printf("\n");

    return 0;
}*/
