/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42wolfsburg.de>    #+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 09:37:55 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/12 09:37:59 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (i < n)
		return (s1[i] - s2[i]);
	else
		return (0);
}
/*
#include <stdio.h>

int	main()
{
	char	s1[] = "hello 1";
	char	s2[] = "hello 3";
	
	printf("%d\n", ft_strncmp(s1, s2, 4));
}*/
