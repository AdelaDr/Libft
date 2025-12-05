/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrahoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:23:30 by adrahoto          #+#    #+#             */
/*   Updated: 2025/12/05 23:23:41 by adrahoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*write_min(void)
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

int	count_digits(int n)
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

char	*num_write(int n, int digit_num, int minus)
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

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;
	char	*temp;

	str = ft_itoa(n);
	temp = str;
	if (!str)
		return ;
	while (*str)
	{
		write(fd, str, 1);
		str++;
	}
	free(temp);
}
/*
int	main(void)
{
	// Test 1: stdout
	ft_putnbr_fd(12345, 1);
	write(1, "\n", 1);

	// Test 2: negative number to stderr
	ft_putnbr_fd(-9876, 2);
	write(2, "\n", 1);

	// Test 3: INT_MIN to a file
	int fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd < 0) return (1);
	ft_putnbr_fd(-2147483648, fd);
	write(fd, "\n", 1);
	close(fd);

	return (0);
}*/
