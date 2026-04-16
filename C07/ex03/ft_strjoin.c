/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 09:32:59 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/23 09:33:02 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_len(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		len_sep;
	int		len_total;

	i = 0;
	len_sep = 0;
	len_total = 0;
	if (size <= 0)
		return (malloc(sizeof(char)));
	while (i < size)
	{
		len_total = len_total + ft_strlen(strs[i]);
		i++;
	}
	len_sep = ft_strlen(sep);
	len_sep = len_sep * (size - 1);
	len_total = len_total + len_sep;
	dest = malloc(sizeof(char) * (len_total + 1));
	if (dest == 0)
		return (NULL);
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		k;

	dest = ft_len(size, strs, sep);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			dest[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			dest[k++] = sep[j++];
		}
		i++;
	}
	dest[k] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char *strs[] = {"salut" , "ca" , "va" , "?"};
	int size = 4;
	char sep[] = ",";
	
	printf("%s\n", ft_strjoin(size, strs, sep));
}*/		
