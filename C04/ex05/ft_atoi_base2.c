/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 12:31:14 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/15 13:48:56 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_check_and_len(char *base);

int	ft_len_to_convert(int nbr; char *base_to)
{
	int	len;
	int	i;
	
	i = 0;
	len = ft_check_and_len(base_to);
	if (nbr < 0)
	{
		nbr = -nbr
		len++;
	}
	while (nbr >= len)
	{
		nbr = nbr / len;
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base, int len, char *res)
{
	long int	n;
	int	i;
	int	j;
	
	i = len;
	j = 0;
	n = nbr;
	if (nbr < 0)
	{
		res[0] = "-";
		j++;
	}
	while (n >= len)
	{
		res[i] = base[n % len];
		n = n / len;
		i--;
	}
	if (n < len)
		res[j] = base[n];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int	num_atoi;
	int	len;
	int	i;
	
	if (ft_check_and_len(base_from) == 0 || ft_check_and_len(base_to) ==  0)
		return (NULL);
	
	num_atoi = ft_atoi_base(nbr, base_from);
	len = ft_len_to_convert(num_atoi, base_to);
	res = malloc(sizeof(char) * (len + 1);
	if (res == 0)
		return (NULL);
	ft_putnbr_base(num_atoi, base_to, len, res);
	return (res);
}

#include <stdio.h>

int main(void)
{
    char c1[32];
    char c2[32];
    char c3[32];
    char c4[32];
	char	*hex = "0123456789abcdef";
	char	*oct = "012345678";
	char	*dec = "0123456789";
	char	*bin = "01";
	int	n = 42;
    
    ft_putnbr_base(n, bin, c1);
    printf("%d in binary: %s\n", n, c1);
	ft_putnbr_base(n, oct, c2);
    printf("%d in octal: %s\n", n, c2);
	ft_putnbr_base(n, dec, c3);
    printf("%d in decimal: %s\n", n, c3);
	ft_putnbr_base(n, hex, c4);
    printf("%d in hexadecimal: %s\n", n, c4);
}
