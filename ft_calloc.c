/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrahoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:20:36 by adrahoto          #+#    #+#             */
/*   Updated: 2025/12/05 23:32:15 by adrahoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t items, size_t size)
{
	size_t			total;
	unsigned char	*ptr;
	size_t			i;

	total = items * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	int	numItems;
	int	*myArray;

	numItems = 15;
	myArray = ft_calloc(numItems, sizeof(int));
	for (int i = 0; i < numItems; i++)
		printf("%d\n ", myArray[i]);
	free(myArray);
	return (0);
}*/
