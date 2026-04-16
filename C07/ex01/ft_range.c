/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 12:45:17 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/22 12:45:23 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	res = malloc(sizeof(int) * (max - min));
	if (res == 0)
		return (NULL);
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}
/*
#include <stdio.h>

int	main()
{
	int min = 5;
	int max = 9;
	int *res;
	int i = 0;
	
	res = ft_range(min, max);
	
	while (res[i])
	{
		printf("%d\n", res[i]);
		i++;
	}
} */
