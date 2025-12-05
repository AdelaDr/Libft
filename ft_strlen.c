/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrahoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:40:57 by adrahoto          #+#    #+#             */
/*   Updated: 2025/12/05 23:41:04 by adrahoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/*
int	main(void)
{
	printf("c ft\n");
	printf("abc: %ld\n", strlen("abc"));
	printf("123456: %ld\n", strlen("123456"));
	printf("abc: %d\n", ft_strlen("abc"));
		printf("123456: %d\n", ft_strlen("123456"));
	return (0);
}*/
