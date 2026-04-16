/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:13:49 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/09 17:14:51 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "569885656554";
	char str2[] = "4555f888erere";
	
	printf("is numeric str: %d\n", ft_str_is_numeric(str));
	printf("is numeric str: %d\n", ft_str_is_numeric(str2));
}*/	
