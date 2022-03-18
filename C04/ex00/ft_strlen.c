/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 10:08:22 by fguy              #+#    #+#             */
/*   Updated: 2021/07/27 15:01:09 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char	s1[] = "hello les copains";
	char	s2[] = "";

	printf("%d\n", ft_strlen(s1));
	printf("%d\n", ft_strlen(s2));
	printf("%lu\n", strlen(s1));
	printf("%lu\n", strlen(s2));
	return (0);
}*/
