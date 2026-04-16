/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 09:04:59 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/10 09:05:03 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "hello";
	char str2[] = "heLLo";
	
	printf("is lower case str: %d\n", ft_str_is_lowercase(str));
	printf("is lower case str2: %d\n", ft_str_is_lowercase(str2));
}*/
