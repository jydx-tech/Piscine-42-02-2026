/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 09:00:15 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/18 10:26:57 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_sol(int *sol)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		write(1, &"0123456789"[sol[i]], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_is_safe(int row, int col, int *sol)
{
	int	i;

	i = row - 1;
	while (i >= 0)
	{
		if (sol[i] == col)
			return (0);
		if (row - i == col - sol[i])
			return (0);
		if (row - i == sol[i] - col)
			return (0);
		i--;
	}
	return (1);
}

void	ft_ten_recursive(int row, int *sol, int *count)
{
	int	col;

	col = 0;
	if (row == 10)
	{
		ft_print_sol(sol);
		(*count)++;
	}
	while (col < 10)
	{
		if (ft_is_safe(row, col, sol) == 1)
		{
			sol[row] = col;
			ft_ten_recursive(row + 1, sol, count);
		}
		col++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	sol[10];
	int	count;

	count = 0;
	ft_ten_recursive(0, sol, &count);
	return (count);
}
/*
int main(void)
{
	printf("Retour du compteur : %d", ft_ten_queens_puzzle());
	return (0);
}*/
