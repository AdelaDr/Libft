#include <stddef.h>
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
        unsigned char    *d;
        const unsigned char      *s;

        d = dest;
        s = src;
	if (d == s || n == 0)
		return dest;
	if (d < s)
	{
        	while (n > 0)
        	{
                	*d = *s;
                	d++;
                	s++;
                	n--;
		}
        }
	else
	{
		d += n - 1;
		s += n - 1;
		while (n > 0)
		{
			*d = *s;
                        d--;
                        s--;
                        n--;
		}
	}
        return (dest);
}
/*
int main(void)
{
    char str1[20] = "Hello World!";
    char str2[20] = "Hello World!";

    printf("Before ft_memmove: %s\n", str1);
    ft_memmove(str1 + 6, str1, 5);
    printf("After ft_memmove:  %s\n", str1);

    strcpy(str2, "Hello World!");
    memmove(str2 + 6, str2, 5);
    printf("After memmove:     %s\n", str2);
    return 0;
}*/
