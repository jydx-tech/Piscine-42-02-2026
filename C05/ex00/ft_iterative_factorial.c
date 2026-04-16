/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 10:54:04 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/16 10:54:10 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	res = 1;
	while (nb > 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_recursive_factorial(5));
}*/
