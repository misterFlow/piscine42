/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 18:24:18 by fguy              #+#    #+#             */
/*   Updated: 2021/07/21 17:08:47 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	s1[] = "Florian";
	char	s2[] = "12aaa3bbb";
	char	s3[] = "!@aaa#bbb";

	
	printf("%d\n", ft_str_is_alpha(s1));
	printf("%d\n", ft_str_is_alpha(s2));
	printf("%d\n", ft_str_is_alpha(s3));
	return (0);
}*/
