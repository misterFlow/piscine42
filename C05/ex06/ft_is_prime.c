/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:58:53 by fguy              #+#    #+#             */
/*   Updated: 2021/07/28 21:38:29 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 1)
	{
		return (0);
	}
	while (i < nb)
	{
		if ((nb % i) == 0)
			return (0);
		if ((nb % i) != 0)
			i++;
	}
	if ((nb % i) == 0)
		return (1);
	return (0);
}

/*int	main(void)
{
	int x;

	x = -4;
	printf("%d\n", ft_is_prime(x));
	return (0);
}*/
