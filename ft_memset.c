/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrahoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:21:30 by adrahoto          #+#    #+#             */
/*   Updated: 2025/12/05 23:21:31 by adrahoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = (unsigned char)c;
		p++;
		n--;
	}
	return (s);
}
/*
int	main(void)
{
	char buffer[10] = "abcdefghi";

	printf("Original buffer: %s\n", buffer);

	ft_memset(buffer + 2, 'X', 4);  // replace 4 bytes starting at index 2

	printf("After ft_memset(buffer + 2, 'X', 4): %s\n", buffer);

	return (0);
}*/
