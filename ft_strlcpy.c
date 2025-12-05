/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrahoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:40:26 by adrahoto          #+#    #+#             */
/*   Updated: 2025/12/05 23:40:27 by adrahoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t		len;
	const char	*s;

	len = 0;
	s = src;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	if (n == 0)
		return (len);
	while (n > 1 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (len);
}
/*
int	main(void)
{
	char src[] = "Hello, Libft!";
	char dest[20];
	size_t ret;

	printf("Source string: \"%s\"\n\n", src);

	ret = ft_strlcpy(dest, src, sizeof(dest));
	printf("Case 1: Enough space\n");
	printf("Copied string: \"%s\"\n", dest);
	printf("Returned length: %zu\n\n", ret);

	ret = ft_strlcpy(dest, src, 6);
	printf("Case 2: Small buffer (n=6)\n");
	printf("Copied string: \"%s\"\n", dest);
	printf("Returned length: %zu\n\n", ret);
	return (0);
}*/
