/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrahoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:28:14 by adrahoto          #+#    #+#             */
/*   Updated: 2025/12/06 17:18:38 by adrahoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	is_in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_find_start(const char *s1, const char *set)
{
	int	i;

	i = 0;
	if (!set || !*set)
		return (0);
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	return (i);
}

static int	ft_find_end(const char *s1, const char *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	if (!set || !*set)
		return (i);
	while (i >= 0 && is_in_set(s1[i], set))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;
	int		i;

	if (!s1)
		return (NULL);
	start = ft_find_start(s1, set);
	end = ft_find_end(s1, set);
	if (start > end)
	{
		res = (char *)malloc(1);
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	res = (char *)malloc(end - start + 2);
	if (!res)
		return (NULL);
	i = 0;
	while (start <= end)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);
}
/*
int	main(void)
{
	char const	s1[] = "abcdeabc";
	char const	set[] = "bc";
	char		*res;

	res = ft_strtrim(s1, set);
	printf("%s\n", res);
	free(res);
	return (0);
}*/
