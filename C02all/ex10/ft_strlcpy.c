/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 14:14:19 by fguy              #+#    #+#             */
/*   Updated: 2021/07/21 20:01:35 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char	s1[] = "Salut Salut";
	char	s2[] = "Yoyo";
	unsigned int	t;

	t = 3;
	printf("%d\n", ft_strlcpy(s1, s2, t));
	return (0);
}*/
