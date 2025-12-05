#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
    size_t s_len = 0;
    char *substr;

    while (s[s_len])
        s_len++;
    if (start >= s_len)
        return (malloc(1));

    if (len > s_len - start)
        len = s_len - start;

    substr = malloc(len + 1);
    if (!substr)
        return (NULL);

    i = 0;
    while (i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}
/*
int main(void)
{
	char s[] = "abcdefgh";
	unsigned int start = 3;
	size_t len = 3;
	char *substr = ft_substr(s, start, len);
	printf("%s\n", substr);
	free(substr);
	return (0);
}*/
