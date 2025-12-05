#include <stdlib.h>
#include <stdio.h>

size_t ft_strlen(const char *str)
{
    size_t len;
   
	len  = 0;
    	while (str[len])
     	   len++;
	return len;
}

void ft_strcpy_at(char *dest, const char *src, size_t start)
{
    size_t i; 
    i = 0;
    while (src[i])
    {
        dest[start + i] = src[i];
        i++;
    }
}

char *ft_strjoin(const char *s1, const char *s2)
{
    size_t len1;
   size_t len2;
    char *res;

    if (!s1 || !s2)
        return NULL;
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    res = malloc(len1 + len2 + 1);
    if (!res)
        return NULL;
    ft_strcpy_at(res, s1, 0);
    ft_strcpy_at(res, s2, len1);
    res[len1 + len2] = '\0';
    return res;
}
/*
int main(void)
{
    char *res = ft_strjoin("Hello, ", "world!");
    if (!res) { printf("Allocation failed\n"); return 1; }
    printf("Result: %s\n", res);
    free(res);
    return 0;
}*/
