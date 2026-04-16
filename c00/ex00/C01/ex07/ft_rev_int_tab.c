/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 10:25:18 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/08 10:25:23 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i <= j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
/*
#include <stdio.h>

int main(void) 
{
  int tab[] = {1, 2, 3, 4, 5};
  int i = 0;

  ft_rev_int_tab(tab, 5);

  while (i < 5) 
  {
    printf("%d ", tab[i]);
    i++;
  }
  printf("\n");

  return (0);
}*/
