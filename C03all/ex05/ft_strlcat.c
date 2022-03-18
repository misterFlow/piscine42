/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 12:41:57 by fguy              #+#    #+#             */
/*   Updated: 2021/07/26 12:56:05 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	if (size < i)
	{
		while (src[j] != '\0')
			j++;
		return (size + j);
	}
	while (src[j] != '\0' && size > 0 && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	while (src[j++])
		i++;
	return (i);
}

int	main(void)
{
	char	s1[10] = "Hello...";
	char	s2[] = "youuuuuuuuuuuuuuuuu";
	unsigned int	nb = 12;

	printf("%lu\n", strlcat(s1, s2, nb));
	printf("%u\n", ft_strlcat(s1, s2, nb));
	return (0);
}
