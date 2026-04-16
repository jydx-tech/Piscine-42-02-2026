/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 10:29:30 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/15 12:27:40 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_putnbr_base(int nbr, char *base)
{
	int			l_base;
	long int	n;

	l_base = ft_check_and_len(base);
	if (l_base <= 1)
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		n = -(long int)nbr;
		ft_putnbr_base(n / l_base, base);
		write(1, &base[n % l_base], 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= l_base)
	{
		ft_putnbr_base(nbr / l_base, base);
	}
	write(1, &base[nbr % l_base], 1);
	return ;
}
