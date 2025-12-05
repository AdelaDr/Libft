/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrahoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:21:00 by adrahoto          #+#    #+#             */
/*   Updated: 2025/12/05 23:37:01 by adrahoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (!n || d == s)
		return (dest);
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n - 1;
		s += n - 1;
		while (n--)
			*d-- = *s--;
	}
	return (dest);
}

/*
int	main(void)
{
	char str1[20] = "Hello World!";
	char str2[20] = "Hello World!";

	printf("Before ft_memmove: %s\n", str1);
	ft_memmove(str1 + 6, str1, 5);
	printf("After ft_memmove:  %s\n", str1);

	strcpy(str2, "Hello World!");
	memmove(str2 + 6, str2, 5);
	printf("After memmove:     %s\n", str2);
	return (0);
}*/
