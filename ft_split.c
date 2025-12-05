/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrahoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:24:30 by adrahoto          #+#    #+#             */
/*   Updated: 2025/12/06 00:07:12 by adrahoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_wordcount(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	*ft_worddup(char const *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		w;

	res = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = i;
			while (s[j] && s[j] != c)
				j++;
			res[w++] = ft_worddup(s, i, j);
			i = j;
		}
		else i++;
	}
	res[w] = NULL;
	return (res);
}
/*
int	main(void)
{
	char **words;
	char *s;
	char c;
	int i;

	s = "hello,,world,test";
	c = ',';
	words = ft_split(s, c);
	if (!words)
		return (1);

	i = 0;
	while (words[i])
	{
		printf("word[%d] = \"%s\"\n", i, words[i]);
		free(words[i]);
		i++;
	}
	free(words);
	return (0);
}*/
