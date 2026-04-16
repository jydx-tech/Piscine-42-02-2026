/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 09:46:23 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/06 12:16:47 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int main(void)
{
	int a = 5;
	int b = 2;
	int div;
	int mod;
	int *ptr1 = &div;
	int *ptr2 = &mod;

	ft_div_mod(a, b, ptr1, ptr2);
	printf("%d\n", div);
	printf("%d\n", mod);

}*/
