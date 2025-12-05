/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrahoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:17:36 by adrahoto          #+#    #+#             */
/*   Updated: 2025/12/05 23:17:38 by adrahoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memchr(const void *arr, int c, size_t n)
{
	const unsigned char	*a;
	unsigned char		target;

	a = arr;
	target = (unsigned char)c;
	while (n > 0)
	{
		if (*a == target)
			return ((void *)a);
		a++;
		n--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char myStr[] = "Hello World!";
	char *myPtr = (char*)ft_memchr(myStr, 'o', 12);
	if (myPtr != NULL)
		printf("%s\n", myPtr);
	return (0);
}*/
