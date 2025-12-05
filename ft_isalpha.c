/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrahoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:42:06 by adrahoto          #+#    #+#             */
/*   Updated: 2025/12/05 23:42:08 by adrahoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("c ft\n");
	printf("A: %d\n", isalpha('A'));
	printf("9: %d\n", isalpha('9'));
	printf("my ft\n");
		printf("A: %d\n", ft_isalpha('A'));
		printf("9: %d\n", ft_isalpha('9'));
	return (0);
}*/
