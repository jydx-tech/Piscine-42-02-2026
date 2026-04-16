/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arasadea <arasadea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:58:53 by arasadea          #+#    #+#             */
/*   Updated: 2026/02/07 18:08:40 by arasadea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	cy;
	int	cx;

	if (x < 1 || y < 1)
		return ;
	cy = 1;
	while (cy <= y)
	{
		cx = 1;
		while (cx <= x)
		{
			if ((cy == 1 || cy == y) && (cx == 1 || cx == x))
				ft_putchar('o');
			else if (cy == 1 || cy == y)
				ft_putchar('-');
			else if (cx == 1 || cx == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			cx++;
		}
		ft_putchar('\n');
		cy++;
	}
}
