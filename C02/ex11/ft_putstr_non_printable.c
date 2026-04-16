/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 09:34:22 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/11 09:34:27 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hexa(char h)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	write(1, &hexa[h / 16], 1);
	write(1, &hexa[h % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			ft_print_hexa(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main()
{
	char	str[] = "Hello\nHow are you?";
	
	ft_putstr_non_printable(str);
}*/
