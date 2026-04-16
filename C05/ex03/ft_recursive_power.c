/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 14:26:35 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/16 14:26:39 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power >= 1)
		res = (nb * ft_recursive_power(nb, power - 1));
	return (res);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_recursive_power(2, 4));
}*/
