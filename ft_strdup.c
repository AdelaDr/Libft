#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	char *str = malloc(i * sizeof(char) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main(void)
{
	char source[] = "abcde";
	char* target = ft_strdup(source);

	printf("%s\n", target);
	return (0);
}
