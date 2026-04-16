/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 13:26:24 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/22 13:26:27 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*res;

	i = 0;
	res = malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		res = NULL;
		*range = res;
		return (0);
	}
	if (range == 0)
		return (-1);
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	*range = res;
	return (i);
}
/*
#include <stdio.h>

int	main()
{
	int min = 5;
	int max = 9;
	int *range;
	int i = 0;
	
	ft_ultimate_range(range, min, max);
	printf("%d\n", ft_ultimate_range(range, min, max));
}*/
