/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrahoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:15:53 by adrahoto          #+#    #+#             */
/*   Updated: 2025/12/05 23:15:56 by adrahoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static char	*write_min(void)
{
	char	*res;

	res = malloc(12);
	if (!res)
		return (NULL);
	res[0] = '-';
	res[1] = '2';
	res[2] = '1';
	res[3] = '4';
	res[4] = '7';
	res[5] = '4';
	res[6] = '8';
	res[7] = '3';
	res[8] = '6';
	res[9] = '4';
	res[10] = '8';
	res[11] = '\0';
	return (res);
}

static int	count_digits(int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static char	*num_write(int n, int digit_num, int minus)
{
	char	*res;
	char	digit;
	int		i;

	res = malloc(digit_num + minus + 1);
	if (!res)
		return (NULL);
	res[digit_num + minus] = '\0';
	i = digit_num + minus - 1;
	while (digit_num > 0)
	{
		digit = n % 10 + '0';
		res[i] = digit;
		n /= 10;
		i--;
		digit_num--;
	}
	if (minus == 1)
		res[0] = '-';
	return (res);
}

char	*ft_itoa(int n)
{
	int		digit_num;
	char	*res;
	int		minus;

	minus = 0;
	if (n == -2147483648)
	{
		res = write_min();
		return (res);
	}
	if (n < 0)
	{
		minus = 1;
		n *= -1;
	}
	digit_num = count_digits(n);
	res = num_write(n, digit_num, minus);
	return (res);
}
/*
int	main(void)
{
	char *res = ft_itoa(0);
	printf("%s\n", res);
	free(res);
	return (0);
}*/
