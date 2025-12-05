/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrahoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:22:58 by adrahoto          #+#    #+#             */
/*   Updated: 2025/12/05 23:22:59 by adrahoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	// Test 1: print to stdout
	ft_putendl_fd("Hello, stdout!", 1);

	// Test 2: print to stderr
	ft_putendl_fd("Hello, stderr!", 2);

	// Test 3: print to a file
	int fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
		return (1);
	ft_putendl_fd("Hello, file!", fd);
	close(fd);

	return (0);
}*/
