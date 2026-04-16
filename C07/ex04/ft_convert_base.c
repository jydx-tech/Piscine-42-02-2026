/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 12:31:14 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/24 17:25:35 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
int		ft_check_and_len(char *base);

int	ft_len_to_convert(int nbr, char *base_to)
{
	int			len;
	int			i;
	long int	nb;

	nb = nbr;
	i = 1;
	len = ft_check_and_len(base_to);
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb >= len)
	{
		nb = nb / len;
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base_to, int len, char *res)
{
	long int	n;
	int			i;

	i = len - 1;
	n = nbr;
	if (nbr < 0)
	{
		res[0] = '-';
		n = -n;
	}
	if (n == 0)
		res[i] = base_to[0];
	while (n > 0)
	{
		res[i] = base_to[n % ft_check_and_len(base_to)];
		n = n / ft_check_and_len(base_to);
		i--;
	}
	res[len] = '\0';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		num_atoi;
	int		len;

	if (ft_check_and_len(base_from) == 0 || ft_check_and_len(base_to) == 0)
		return (NULL);
	num_atoi = ft_atoi_base(nbr, base_from);
	len = ft_len_to_convert(num_atoi, base_to);
	res = malloc(sizeof(char) * (len + 1));
	if (res == 0)
		return (NULL);
	ft_putnbr_base(num_atoi, base_to, len, res);
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*hex;
	char	*oct;
	char	*dec;
	char	*bin;
	char	*nbr;

	hex = "0123456789abcdef";
	oct = "012345678";
	dec = "0123456789";
	bin = "01";
	nbr = "111101110";
	printf("%s to decimal: %s\n", nbr, ft_convert_base(nbr, bin, dec));
	printf("%s to octal: %s\n", nbr, ft_convert_base(nbr, bin, oct));
	printf("%s to hexadecimal: %s\n", nbr, ft_convert_base(nbr, bin, hex));
}*/
