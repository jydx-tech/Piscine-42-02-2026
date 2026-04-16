/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:49:03 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/17 10:49:07 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
	{
		i++;
	}
	if ((i * i) == nb)
		return (i);
	else
		return (0);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_sqrt(25));
}*/
