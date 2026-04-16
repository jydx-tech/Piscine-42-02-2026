/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42wolsburg.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:37:45 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/10 11:37:52 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	char	str[] = "hello, 42!";
	char	str2[] = "hello, 42!\n";
	
	printf("is printable str: %d\n", ft_str_is_printable(str));
	printf("is printable str2: %d\n", ft_str_is_printable(str2));
}*/
