/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 10:11:44 by fguy              #+#    #+#             */
/*   Updated: 2021/07/21 17:13:51 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	s1[] = "This Is Soo Printable";
	char	s2[] = "Th|$ |$ @l$0 Pr|nt@bl3";
	char	s3[] = "This" "\n" "is not printable";

	printf("%d\n", ft_str_is_printable(s1));
	printf("%d\n", ft_str_is_printable(s2));
	printf("%d\n", ft_str_is_printable(s3));
	return (0);
}*/
