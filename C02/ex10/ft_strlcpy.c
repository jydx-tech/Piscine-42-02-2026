/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 09:11:09 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/11 09:11:18 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i])
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main()
{
	char	src[] = "hello, how are you?";
	char	dest[] = "#";
	
	printf("src : %s\n", src);
	printf("return size: %d\ndest: %s",ft_strlcpy(dest, src, 5), dest);
}*/
