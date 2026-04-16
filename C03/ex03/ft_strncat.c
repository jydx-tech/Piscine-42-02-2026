/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenaux <jdenaux@>student.42wolfsburg.de   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:35:52 by jdenaux           #+#    #+#             */
/*   Updated: 2026/02/12 10:36:53 by jdenaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len_dest;

	i = 0;
	len_dest = 0;
	while (dest[len_dest])
	{
		len_dest++;
	}
	while (i < nb && src[i])
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
	
	printf("%s\n",  ft_strncat(dest, src, 12));
}*/
