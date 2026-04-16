/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 12:18:34 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/06 12:29:40 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

#include <stdio.h>

int main(void)
{
	int a;
	int b;

	a = 5;
	b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}
