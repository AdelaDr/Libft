/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrahoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:42:30 by adrahoto          #+#    #+#             */
/*   Updated: 2025/12/05 23:42:31 by adrahoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
		printf("c ft\n");
		printf("5: %d\n", isascii('5'));
		printf("$: %d\n", isascii('$'));
	printf("€: %d\n", isascii(128));
	printf("Ž: %d\n", isascii(142));
		printf("my ft\n");
		printf("5: %d\n", ft_isascii('5'));
		printf("$: %d\n", ft_isascii('$'));
	printf("€: %d\n", ft_isascii(128));
		printf("Ž: %d\n", ft_isascii(142));
		return (0);
}
*/
