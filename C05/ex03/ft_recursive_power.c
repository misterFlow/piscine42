/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:15:16 by fguy              #+#    #+#             */
/*   Updated: 2021/07/28 21:36:38 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 || power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*int	main(void)
{
	int	x;
	int	y;

	x = -2;
	y = 4;
	printf("%d\n", ft_recursive_power(x, y));
	return (0);
}*/
