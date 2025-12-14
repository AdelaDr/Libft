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

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
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
