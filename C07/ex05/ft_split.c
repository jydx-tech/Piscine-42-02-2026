/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 09:21:54 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/25 10:45:10 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_countword(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_sep(str[i], charset) == 1)
		{
			count++;
			while (str[i] && is_sep(str[i], charset) == 1)
				i++;
		}
		i++;
	}
	return (count);
}

char	*ft_str_split(char *str, char *charset)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && is_sep(str[i], charset) == 1)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (word == 0)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] && is_sep(str[i], charset) == 1)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**tab;

	tab = malloc(sizeof(char *) * (ft_countword(str, charset) + 1));
	if (tab == 0 || str == 0 || charset == 0)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (str[i])
	{
		if (is_sep(str[i], charset) == 1)
		{
			tab[j] = ft_str_split(&str[i], charset);
			while (str[i] && is_sep(str[i], charset) == 1)
				i++;
			j++;
		}
		else
			i++;
	}
	tab[j] = 0;
	return (tab);
}

#include <stdio.h>

int	main(void)
{
	char	*str = "Words to.be/splitted*in@six";
	char	*sep = ".*@!/ ";
	char	**words = ft_split(str, sep);
	int i = 0;

	printf("Before: %s\nAfter: \n", str);
	while (words[i])
	{
		printf("%s\n", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
}
