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

static int	ft_wordcount(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*ft_worddup(char const *s, int *i, char c)
{
	char	*word;
	int		start;
	int		len;

	start = *i;
	len = 0;
	while (s[*i] && s[*i] != c)
	{
		len++;
		(*i)++;
	}
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (len--)
		word[len] = s[start + len];
	start = *i - start;
	word[start] = '\0';
	return (word);
}

static void	ft_free_split(char **res, int w)
{
	while (w--)
		free(res[w]);
	free(res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		w;

	res = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	w = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			res[w] = ft_worddup(s, &i, c);
			if (!res[w])
				return (ft_free_split(res, w), NULL);
			w++;
		}
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
