/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 10:59:34 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/10 10:59:39 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	char	str[] = "HELLO";
	char	str2[] = "HEllO";
	
	printf("is uppercase str: %d\n", ft_str_is_uppercase(str));
	printf("is uppercase str2: %d\n", ft_str_is_uppercase(str2));
}*/
