/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 12:31:14 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/15 13:48:56 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_and_len(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (i == 0)
		return (0);
	return (i);
}

int	in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	nbr(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	res;
	int	l_base;

	i = 0;
	sign = 1;
	res = 0;
	l_base = ft_check_and_len(base);
	if (l_base <= 1)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) || str[i] == '-'
		|| str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] != '\0' && in_base(str[i], base))
	{
		res = res * l_base + nbr(str[i], base);
		i++;
	}
	res = res * sign;
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("  ---+-100efabgfdd", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("ababa", "ab"));
}*/
