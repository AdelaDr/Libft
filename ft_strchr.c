/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrahoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:25:06 by adrahoto          #+#    #+#             */
/*   Updated: 2025/12/05 23:25:10 by adrahoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}
/*
int	main(void)
{
	char myStr[] = "Hello World";
	char *myPtr = ft_strchr(myStr, 'W');
	if (myPtr != NULL)
		printf("%s\n", myPtr);
	return(0);
}*/
