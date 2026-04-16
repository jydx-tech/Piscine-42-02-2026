/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 20:08:45 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/05 20:12:55 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int main(void)
{
	int a = 1;
	int b = 2;
	int *ptr1 = &a;
	int *ptr2 = &b;

	ft_swap(ptr1, ptr2);
	printf("%d\n", a);
	printf("%d\n", b);
}*/
