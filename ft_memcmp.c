/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrahoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:18:16 by adrahoto          #+#    #+#             */
/*   Updated: 2025/12/05 23:18:19 by adrahoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*string1;
	const unsigned char	*string2;

	string1 = (const unsigned char *)str1;
	string2 = (const unsigned char *)str2;
	while (n > 0)
	{
		if (*string1 != *string2)
			return (*string1 - *string2);
		n--;
		string1++;
		string2++;
	}
	return (0);
}
/*
int	main(void)
{
	char myStr1[] = "ABCD";
	char myStr2[] = "ABCE";
	int cmp = ft_memcmp(myStr1, myStr2, 4);

	if (cmp > 0)
		printf("%s is greater than %s\n", myStr1, myStr2);
	else if (cmp < 0)
		printf("%s is greater than %s\n", myStr2, myStr1);
	else
		printf("%s is equal to %s\n", myStr1, myStr2);
	return (0);
}*/
