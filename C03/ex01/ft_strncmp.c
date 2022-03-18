/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:50:26 by fguy              #+#    #+#             */
/*   Updated: 2021/07/28 19:30:25 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && n--)
	{
		if (s1[i] != s2[i])
		{	
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	int	nb = 5;
	char	ch1[] = "ecole42";
	char	ch2[] = "ecolE42";

	printf("%d\n", ft_strncmp(ch1, ch2, nb));
	printf("%d\n", strncmp(ch1, ch2, nb));
	return (0);
}
