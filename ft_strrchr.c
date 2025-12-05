/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrahoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:27:50 by adrahoto          #+#    #+#             */
/*   Updated: 2025/12/05 23:27:51 by adrahoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*p;

	p = NULL;
	while (*str)
	{
		if (*str == (char)c)
			p = str;
		str++;
	}
	if (c == '\0')
		return (str);
	return (p);
}
/*
int	main(void)
{
	char myStr[] = "Hello World";
	char *myPtr = ft_strrchr(myStr, 'l');
	if (myPtr != NULL)
		printf("%s\n", myPtr);
	return (0);
}*/
