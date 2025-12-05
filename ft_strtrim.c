/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrahoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:28:14 by adrahoto          #+#    #+#             */
/*   Updated: 2025/12/05 23:30:57 by adrahoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_find_start(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				j = 0;
				break ;
			}
			else
				j++;
		}
		if (j != 0)
			break ;
		i++;
	}
	return (i);
}

int	ft_find_end(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				j = 0;
				break ;
			}
			else
				j++;
		}
		if (j != 0)
			break ;
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;
	int		i;

	start = ft_find_start(s1, set);
	end = ft_find_end(s1, set);
	if (start > end)
		return (malloc(1));
	res = malloc(end - start + 2);
	if (!res)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		res[i] = s1[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}
/*
int	main(void)
{
	char const s1[] = "abcdeabc";
	char const set[] = "a";

	char *res = ft_strtrim(s1, set);
	printf("%s\n", res);
	free(res);
	return (0);
}*/
