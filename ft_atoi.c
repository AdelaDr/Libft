#include <stdlib.h>
#include <stdio.h>


int	ft_atoi(const char *str)
{
	int	i;
	int	minus;
	int	num;

	i = 0;
	minus = 1;
	num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	num *= minus;
	return (num);
}
/*
int main(void)
{
	char str[] = "    --24 degrees";
	int amount = ft_atoi(str);
	printf("%d\n", amount);
	return (0);
}*/
