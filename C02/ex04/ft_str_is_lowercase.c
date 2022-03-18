/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 19:14:03 by fguy              #+#    #+#             */
/*   Updated: 2021/07/21 17:10:43 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int	main(void)
{
	char	s1[] = "thisschoolisfuckingawesome";
	char	s2[] = "This";
	char	s3[] = "!@aaa";

	printf("%d\n", ft_str_is_lowercase(s1));
	printf("%d\n", ft_str_is_lowercase(s2));
	printf("%d\n", ft_str_is_lowercase(s3));
	return (0);
}*/
