/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 15:51:46 by fguy              #+#    #+#             */
/*   Updated: 2021/07/27 20:25:44 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	neg;

	i = 0;
	j = 0;
	neg = 1;
	while ((str[j] == 32) || (str[j] == 9)
		|| (str[j] == '\n') || (str[j] == '\v')
		|| (str[j] == '\f') || (str[j] == '\r'))
		j++;
	if (str[j] == '\0')
		return (0);
	while (str[j] == '+' || str[j] == '-')
	{
		if (str[j] == '-')
			neg = neg * -1;
		j++;
	}
	while (str[j] && str[j] >= '0' && str[j] <= '9')
	{
		i = i * 10 + str[j] - '0';
		j++;
	}
	return (i * neg);
}

/*int	main(void)
{
	char c[] = " 	---+--+1234ab567";

	printf("%d\n", ft_atoi(c));
	printf("atoi : %d\n", atoi(c));
	return (0);
}*/
