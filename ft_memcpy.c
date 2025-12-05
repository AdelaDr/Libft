#include <stddef.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
        unsigned char *d;
        const unsigned char *s;

        d = (unsigned char *)dest;
        s = (const unsigned char *)src;

        while (n > 0)
        {
                *d = *s;
                d++;
                s++;
                n--;
        }
        return dest;
}
/*
int main(void)
{
	char dest[7] = "123456";
	char src[4] = "abc";
	printf("dest : %s\n", dest);
	printf("src : %s\n", src);
	printf("n : %d\n", 2);
	printf("result : %s\n", (char *)ft_memcpy(dest, src, 2));
	return (0);
}*/
