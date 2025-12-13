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

static size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	if (!dest && size == 0)
	{
		if (src)
			return (ft_strlen(src));
		return (0);
	}
	dlen = 0;
	while (dlen < size && dest[dlen])
		dlen++;
	slen = ft_strlen(src);
	if (dlen == size)
		return (size + slen);
	i = 0;
	while (src[i] && dlen + i < size - 1)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
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
