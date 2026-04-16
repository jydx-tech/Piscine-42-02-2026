/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 12:57:18 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/08 12:57:58 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i <= size -2)
	{
		j = i + 1;
		while (j <= size -1)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
 	int	tab[] = {5, 2, 1, 4, 3};
 	int	i = 0;

	ft_sort_int_tab(tab, 5);

 	while (i < 5) 
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");

 	return (0);
}*/
