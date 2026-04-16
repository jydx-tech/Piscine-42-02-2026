/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:06:15 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/12 10:06:19 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len_dest;

	i = 0;
	len_dest = 0;
	while (dest[len_dest])
	{
		len_dest++;
	}
	while (src[i])
	{
		dest[len_dest] = src[i];
		i++;
		len_dest++;
	}
	dest[len_dest] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char	src[] = " how are you?";
	char	dest[] = "hello,";
	
	printf("%s\n",  ft_strcat(dest, src));
}*/
