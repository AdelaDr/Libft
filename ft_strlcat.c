/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrahoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:39:59 by adrahoto          #+#    #+#             */
/*   Updated: 2025/12/05 23:40:00 by adrahoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	dest_len = i;
	while (src[j] != '\0')
		j++;
	src_len = j;
	if (size <= dest_len)
		return (size + src_len);
	j = 0;
	while (src[j] != '\0' && dest_len + j < size - 1)
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char dest[20];
	char src[] = "Libft";
	size_t ret;

	// Enough space
	strcpy(dest, "Hello, ");
	ret = ft_strlcat(dest, src, sizeof(dest));
	printf("%s | %zu\n", dest, ret);

	// Small buffer
	strcpy(dest, "Hello, ");
	ret = ft_strlcat(dest, src, 10);
	printf("%s | %zu\n", dest, ret);

	// Zero buffer
	strcpy(dest, "Hello, ");
	ret = ft_strlcat(dest, src, 0);
	printf("%s | %zu\n", dest, ret);

	return (0);
}*/
