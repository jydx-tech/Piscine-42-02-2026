/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:05:09 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/10 15:05:16 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	ft_is_alpha_num(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		return (1);
	if (*c >= 'A' && *c <= 'Z')
		return (1);
	if (*c >= '0' && *c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_lower(str);
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || ((ft_is_alpha_num(&str[i - 1]) == 0)))
			{
				str[i] = str[i] -32;
			}
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char	str[] = "   hello";
	
	printf("strcapitalize str: %s\n", ft_strcapitalize(str));
}*/
